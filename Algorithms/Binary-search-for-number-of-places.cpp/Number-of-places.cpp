#include<bits/stdc++.h>
using namespace std;
bool isCheck(int mid , vector<int>&arr,int station,vector<int>&length){
    int c=0;
    int m =INT_MAX;
    for(int i =0 ; i < arr.size(); i++){
        if(arr[i]==station){
            m=min(m,length[i]);
        }
    }
    return m <= mid;
}
int main(){
    int n ,station; 
    cin >> n ;
    cin >> station;
    vector<int>arr;
    vector<int>length;
    for(int i =0 ; i < n ;i++){
        int k ;
        cin>>k;
        arr.push_back(k);
    }
    for(int i =0 ; i < n ;i++){
        int k ;
        cin >> k;
        length.push_back(k);
    }
    // sort(arr.begin(),arr.end());
    int low=0,high = 10000;
    int answer=-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(isCheck(mid,arr,station,length)){
            answer=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(answer==-1) cout<<"There is no possible station"<<endl;
    else cout<<answer<<endl;
}