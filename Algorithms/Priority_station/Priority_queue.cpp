#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n ;
    vector<int>stations;
    for(int i =0 ; i < n ;i++){
        int k ;
        cin >> k;
        stations.push_back(k);
    }
    priority_queue<int>pq;
    for(int i =0 ; i < n ;i++){
        pq.push(stations[i]);
    }
    cout<<"The best station is"<< pq.top()<<endl;
}