#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    //Take input from user
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long strength=0;
    sort(arr,arr+n);
    long long mini=arr[0];
    long long maxi=arr[n-1];
    for(long long i=0;i<n;i++){
        if((mini<arr[i])&&(arr[i]<maxi)){
            strength++;
        }
    }
    cout<<strength;
}