#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int TilingWays(int n){
    if(n==0 || n==1){
        return n;
    }
    return TilingWays(n-1) + TilingWays(n-2);
}
int main(){
    cout<<TilingWays(6);
}