#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int nCrFact(int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++){
        factorial*=i;
    }
    return factorial;
    
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans = nCrFact(n)/(nCrFact(r)*nCrFact(n-r));
    cout<<ans<<endl;
}