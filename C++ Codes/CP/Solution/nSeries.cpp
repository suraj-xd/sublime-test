#include <bits/stdc++.h>
using namespace std;
int Nseries(int n){
    return n*n;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<Nseries(n)<<endl;
    }
}