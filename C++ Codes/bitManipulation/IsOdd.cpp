#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int IsOdd(int n){
    return (n&1)!=0; 
}
int main(){
    int n; cin>>n;
    if(IsOdd(n)){
        cout<<"Is ODD";
    }else{
        cout<<"Is Even";
    }
    return 0;
}