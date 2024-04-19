#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// choosing number from a[i..j] n get max;
int solveCoin(vi &a, int i,int j, vvi &dp){
    if(i==j) return a[i];
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int l = a[i] + min(solveCoin(a,i+2,j,dp),solveCoin(a,i+1,j-1,dp));
    int r = a[j] + min(solveCoin(a,i,j-2,dp),solveCoin(a,i+1,j-1,dp));
    return dp[i][j] = max(l,r);
}
int main(){
    int n; cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;
    vvi dp(n+1,vi(n+1,-1));
    cout<<solveCoin(a,0,n-1,dp);
}

// input: 4
//        1 2 3 4
// output: 6