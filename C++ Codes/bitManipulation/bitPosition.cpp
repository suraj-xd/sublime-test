#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n){
    while(n>0){
        if(n%2==0){
            cout<<"0";
        }else{
            cout<<"1";
        }
        n/=2;
    }cout<<endl;
}
int setBits(int n){
    int cnt = 0;
    while(n>0){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}
int main(){
    int n; cin>>n;
    decimalToBinary(n);
    int firstSetbit = log2(n&(~(n-1)));
    int lastSetbit  = (log2(n));
    cout<<"firstSetbit:   "<<firstSetbit<<endl;
    cout<<"LastSetbit:  "<<lastSetbit<<endl;
    cout<<"Number of Bits:  "<<setBits(n);
}