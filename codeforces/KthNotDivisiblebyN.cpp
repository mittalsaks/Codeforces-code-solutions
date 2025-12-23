#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>ans;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=1;i<100000000000000000;i++){
            if(n%i!=0){
                k--;
            }
            if(k==0){
                ans.push_back(i);
                break;
            }
        }
    }
    for(auto i:ans){
        cout<<i<<"\n";
    }
}