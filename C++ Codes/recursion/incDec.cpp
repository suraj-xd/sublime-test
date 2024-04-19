#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void dec(int  n){
    if(n==0){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if(n==0){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n; cin>>n;
    // dec(n);6
    inc(n);
}