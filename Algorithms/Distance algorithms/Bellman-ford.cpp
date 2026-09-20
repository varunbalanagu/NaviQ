#include<bits/stdc++.h>
using namespace std;
bool BellmanFord(vector<vector<pair<int,int>>>&adj,int n,vector<int>&dis){
    dis[0]=0;
    for(int i =0 ; i < n-1;i++){
        for(int u =0 ; u < n ; u++){
            for(auto& edge:adj[u]){
                int edgenode=edge.first;
                int edgeweight=edge.second;
                if(dis[u]+edgeweight<dis[edgenode]){
                    dis[edgenode]=dis[u]+edgeweight;
                }
            }
        }
    }
    bool negativeCycle = false;

    for(int u = 0; u < n; u++) {

        if(dis[u] == INT_MAX)
            continue;

        for(auto& edge : adj[u]) {

            int edgenode = edge.first;
            int edgeweight = edge.second;

            if(dis[u] + edgeweight < dis[edgenode]) {

                negativeCycle = true;
            }
        }
    }
    return negativeCycle;
}

int main(){
    vector<vector<pair<int,int>>>adj;
    int n ; 
    cin >> n; 
    for(int i =0 ; i < n ;i++){
        for(int j =0 ; j < n ;j++){
            int k ;
            cin>>k;
            adj[i].push_back({j,k});
        }
    }
    vector<int>dis(n,INT_MAX);
    // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    if(!BellmanFord(adj,n,dis)) cout<<dis[n-1]<<endl;
    else cout<<"Has a negative edge"<<endl;
}