#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long m,n;
    cin>>m>>n;
    vector<long long>arr(m);
    for(long long i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long cost=0;
    int i=0;
        while(arr[i]<=0 && i<m &&n!=0){
        cost+=abs(arr[i]);
        n--;
        i++;
        }
    cout<<cost;
}