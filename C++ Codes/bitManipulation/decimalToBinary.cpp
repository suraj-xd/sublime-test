#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    string binary;
    while(n>0){
        if(n%2==0){
            binary.append("0");
        }else{
            binary.append("1");
        }
        n/=2;
    }
    
    // cout<<binary;
    return 0;
}