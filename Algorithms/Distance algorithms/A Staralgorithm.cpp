#include<bits/stdc++.h>
using namespace std;
vector<int> A(vector<vector<pair<int,int>>>&adj, priority_queue<pair<int,int>,vector<pair<int,int>,greater<pair<int,int>>>>&pq,vector<int>&dis,vector<int>&heurstic){
    dis[0]=0;
 pq.push({dis[0]+heurstic[0],0});
 while(!pq.empty()){
    int weight = pq.top().first;
    int node = pq.top().second;
    pq.pop();
    for(auto&edge:adj[node]){
        int edgenode=edge.first;
        int edgeweight=edge.second;
        if(dis[node]+edgeweight<dis[edgenode]){
            dis[edgenode]=dis[node]+edgeweight;
            int function =dis[edgenode]+heurstic[edgenode];
            pq.push({function,edgenode});
            
        }
    }

 } 
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
    vector<int>heurstic;
    for(int i =0 ; i < n ; i++){
        int k ;
        cin >> k ;
        heurstic.push_back(k);
    }
    priority_queue<pair<int,int>,vector<pair<int,int>,greater<pair<int,int>>>>pq;
    vector<int>dis(n,INT_MAX);
    vector<int>finalize;
    finalize=A(adj,pq,dis,heurstic);
    cout<<dis[0]<<endl;
}