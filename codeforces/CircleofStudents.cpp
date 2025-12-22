#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int pos=-1;
        //Find postion of 1st student 
        for(int i=0;i<n;i++){
            if(p[i]==1){
                pos=i;
                break;
            }
        }
        bool clockwise=true;
        //Now check clockwise 
        for(int i=1;i<n;i++){
            if(p[(pos+i)%n]!=i+1){
                clockwise=false;
                break;
            }
        }
        bool counterclockwise=true;
        //Now check counterclockwise
        for(int i=1;i<n;i++){
            if(p[(pos-i+n)%n]!=i+1){
                counterclockwise=false;
                break;
            }
        }
        //Now return 
        if(clockwise||counterclockwise){
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}