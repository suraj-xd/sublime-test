#include <bits/stdc++.h>
using namespace std;
int power(int x,int n, vector<int> &dp){
    if(n==0) return 1;

    if(dp[x]!=-1) return dp[x];
    if(n%2==0){
        dp[x] = power(x,n/2,dp)*power(x,n/2,dp);
    }else
    {
        dp[x] = x*power(x,(n-1)/2,dp)*power(x,(n-1)/2,dp);
    }  
    return dp[x];   
}
int main(){
    int n,x; cin>>n>>x;
    vector<int> dp(n+1,-1);
    int ans = power(n,x,dp);
    cout<<ans;
}