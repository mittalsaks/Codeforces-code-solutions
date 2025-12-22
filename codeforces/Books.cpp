#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n,t;
    cin>>n>>t;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    //Window Sliding problem
    int l=0;
    int sum=0;
    int ans=0;
    for(int r=0;r<n;r++){
        sum+=arr[r];
        while(sum>t){
            sum-=arr[l];
            l++;
        }
        ans=max(ans,r-l+1);
    }
    cout<<ans;
}