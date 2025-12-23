#include<iostream>
#include<vector>
#include<cctype>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>ans;
    unordered_map<char,int>vowels={{'a',1},{'y',1},{'e',1},{'i',1},{'o',1},{'u',1},{'A',1},{'E',1},{'I',1},{'O',1},{'Y',1},{'U',1}};
    for(char ch:s){
        //present hain 
        if(vowels.find(ch)==vowels.end()){
            ans.push_back('.');
            ans.push_back(tolower(ch));
        }
    }
    for(auto i:ans){
        cout<<i;
    }

}