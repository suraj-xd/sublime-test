#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int BinarySub(int n,int m){
    int ans = n ^ (~(m)+1);
    return ans;
}
int BinaryAdd(int n,int m){
    int ans = n ^ m;
    return ans;
}
int BinaryToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans-1;
}
int main(){
    cout<<BinaryAdd(110,101)<<" ";
    // cout<<BinaryToDecimal(BinarySub(1101,10));
}