#include<iostream>
using namespace std;
 bool only4and7(long long n){
        while(n>0){
            long long digit=n%10;
            if(digit!=4 && digit!=7){
                return false;
            }
            n/=10;
        }
        return true;
    }
int main(){
    long long n;
    cin>>n;
    //Condition -1
    if(n%4==0 || n%7==0 || only4and7(n)){
        cout<<"YES";
    }
    else{   
        cout<<"NO";
    }
}