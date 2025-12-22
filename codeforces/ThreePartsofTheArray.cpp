#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long s=0;
    long long e=n-1;
    long long sum1=0;
    long long sum2=0;
    long long ans=0;
    while(s<=e){
        if(sum1<=sum2){
        sum1+=arr[s++];
        }
        else{
            sum2+=arr[e--];
        }
        if(sum1==sum2){
            ans=sum1;
        }
    }
    cout<<ans<<endl;
}