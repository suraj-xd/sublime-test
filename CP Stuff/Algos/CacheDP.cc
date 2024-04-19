#include <bits/stdc++.h>
using namespace std;
int dp[1000000];
int solve(){
    int a,b,c; cin >> a >> b >> c;
    int val = a*100000 + b * 1000 + c;
    cout << val << endl;
    c = (val%1000);
    b = (val/1000)%100;
    a = (val/100000);
    cout << a << b << c<<endl; 
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}