#include <bits/stdc++.h>
using namespace std;
int factorial(int n,vector<int> &dp){
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];
    dp[n] = n*factorial(n-1,dp);
    return dp[n];
}
int main(){
    int n; cin>>n;
    vector<int> dp(n+1,-1);
    int ans = factorial(n,dp);
    cout<<ans;
}
