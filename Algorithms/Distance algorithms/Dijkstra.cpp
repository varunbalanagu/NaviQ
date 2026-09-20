#include<bits/stdc++.h>
using namespace std;
vector<int> dijkstra(vector<vector<pair<int,int>>>&adj,priority_queue<pair<int,int>,vector<pair<int,int>,greater<pair<int,int>>>>&pq,vector<int>&dis){
     dis[0]=0;
     pq.push({0,0});
     while(!pq.empty()){
        int weight=pq.top().first;
        int node =pq.top().second;
        pq.pop();
        for(auto&edge:adj[node]){
            int edgenode=edge.first;
            int edgeWeight=edge.second;
            if(dis[node]+edgeWeight<dis[edgenode]){
                dis[edgenode]=dis[node]+edgeWeight;
                pq.push({dis[edgenode],edgenode});
            }
        }
     }
     return dis;
}
int main(){
    vector<vector<pair<int,int>>>adj;
    int n ;
    cin>>n;
    adj.resize(n);
    for(int i =0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int weight;
            cin>>weight;
            adj[i].push_back({j,weight});
            
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>,greater<pair<int,int>>>>pq;
    vector<int>dis(n,INT_MAX);
    vector<int>finalize;
    finalize=dijkstra(adj,pq,dis);
    cout<<dis[0]<<endl;
}