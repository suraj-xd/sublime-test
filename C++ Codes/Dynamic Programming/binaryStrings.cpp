#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n; cin>>n;
    vi zero(n+1);
    vi one(n+1);
    one[1] = 1;
    zero[1] = 1;
    rep(i,2,n+1){
        one[i] = zero[i-1];
        zero[i] = one[i-1]+zero[i-1];
    }
    cout<<one[n]+zero[n];

// input: 3
// outout: 5 //101 100 001 000 010

// input: 2
// output: 3 // 10 01 00
}

// number of binary strings
// derived from fibonacci
// int binaryStrings(int n, vi &dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];

//     dp[n] = binaryStrings(n-1,dp)+binaryStrings(n-2,dp);
//     return dp[n];
// }
// int main(){
//     int n; cin>>n;
//     vi dp(n+1,-1);
//     int ans = binaryStrings(n,dp);
//     cout<<ans;
// }