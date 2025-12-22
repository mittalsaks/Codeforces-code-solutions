#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    //Step-1 Store all the digits in vector
    vector<char>digits;
    for(char c:s){
        if(c!='+'){
            digits.push_back(c);
        }
    }
    //Step-2 sort the digits
    sort(digits.begin(),digits.end());
    //Step-3 Print + between them
    for(int i=0;i<digits.size();i++){
        cout<<digits[i];
        if(i!=digits.size()-1){
            cout<<"+";
        }
    }
    return 0;
}