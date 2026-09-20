#include<bits/stdc++.h>
using namespace std;
bool BellmanFord(vector<vector<pair<int,int>>>&adj,int n,vector<int>&dis,vector<int>&heurstic){
    dis[0]=0;
    vector<pair<int,int>>ans;
    for(int i =0 ; i < n-1;i++){
        for(int u =0 ; u < n ; u++){
            for(auto& edge:adj[u]){
                int edgenode=edge.first;
                int edgeweight=edge.second;
                if(dis[u]+edgeweight<dis[edgenode]){
                    dis[edgenode]=dis[u]+edgeweight;
                    int function = dis[edgenode]+heurstic[edgenode];
                    ans.push_back({function,edgenode});
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
    vector<int>heurstic;
    for(int i = 0 ; i < n ;i++){
          int k ;
        cin >> k ;
        heurstic.push_back(k);
    }
    vector<int>dis(n,INT_MAX);
  
    if(!BellmanFord(adj,n,dis)) cout<<dis[n-1]<<endl;
    else cout<<"Has a negative edge"<<endl;
}