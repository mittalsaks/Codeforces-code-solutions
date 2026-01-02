#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    unordered_set<int>count;
    for(int i=1;i<=d;i++){
        if(i%k==0){
            count.insert(i);
        }
        if(i%l==0){
            count.insert(i);
        }
        if(i%m==0){
            count.insert(i);
        }
        if(i%n==0){
            count.insert(i);
        }
    }
    cout<< count.size();
}