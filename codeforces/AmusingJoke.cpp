#include<iostream>
#include<vector>
using namespace std;
int main(){
    string A,B,C;
    cin>>A>>B>>C;
    vector<int>count(26,0);
    //Count frq of A
    for(char ch:A){
        count[ch-'A']++;
    }
    //Count freq of B
    for(char ch:B){
        count[ch-'A']++;
    }
    //Subtract 
    for(char ch:C){
        count[ch-'A']--;
    }
    //Now check
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}