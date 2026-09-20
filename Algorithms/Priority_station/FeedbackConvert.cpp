#include <bits/stdc++.h>
using namespace std;
map<string,int> convertFeedBack(vector<pair<string,string>>&vec,int users){
     int n = vec.size();
     map<string,int>mp;
    //  map<int,int>mp;
     for(int i = 0 ; i < n ;i++){
        if(vec[i].first=="Best"){
              mp[vec[i].second]=1; // Top priority
        }
        else if(vec[i].first=="Good"){
            mp[vec[i].second]=2; // Next priority
        }
        else{
            mp[vec[i].second]=3; // Last priority
        }
     }
     return mp;
}