#include<bits/stdc++.h>
#include "FeedbackConvert.cpp"
using namespace std;
int main(){
    vector<pair<string,string>>feedback;
    int n ;
    cin>>n;
    for(int i =0 ; i < n ;i++){
        string k ;
        string str;
        cin >>str>> k;
        feedback.push_back({str,k});
    }
    map<string,int>RankingArray=convertFeedBack(feedback,n);
    cout<<RankingArray["Vizaj"]<<endl;
    
}