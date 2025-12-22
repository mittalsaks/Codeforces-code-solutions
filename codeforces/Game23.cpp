#include<iostream>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    int moves=0;
    //Reverse Approach 
    if(m%n!=0){
        //M n ka divisble nhi hain toh 
        cout<<-1;
        return 0;
    }
    long long k=m/n;
    //Count how many times it is div by 2
    while(k%2==0){
        k=k/2;
        moves++;
    }
    //Count how many times it is div by 3
    while(k%3==0){
        k=k/3;
        moves++;
    }
    if(k!=1){
        cout<<-1;
    }
    else{
        cout<<moves;
    }
}