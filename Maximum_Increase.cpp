#include<iostream>
#include<vector>
using namespace std;
int mainfunc(vector<int>&arr){
    int ans=1;
    int curr=1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i-1]){
            curr++;
        }else{
            curr=1;
        }
        ans=max(ans,curr);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mainfunc(arr)<<endl;
}