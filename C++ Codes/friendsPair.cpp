#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// recursive dp (memoization)

int friendPair(int n,vi &dp){
    if(n<=1) return 1;

    if(dp[n]!=-1) return dp[n];

    dp[n] = friendPair(n-1,dp) + (n-1) * friendPair(n-2,dp);
    return dp[n];
}
int main(){
    int n; cin>>n;
    vi dp(n+1,-1);
    int ans = friendPair(n,dp);
    cout<<ans<<endl;
}
// iterative dp

// int main(){
//     int n; cin>>n;
//     vi dp(n+1,0);
//     dp[0] = 1;
//     dp[1] = 1;
//     for(int i=2;i<=n;i++){
//         dp[i] = dp[i-1] + ((i-1)*dp[i-2]);
//     }
//     cout<<dp[n];
// }

// normal recursive

// int friendsPairing(int n){
//     if(n<=1) {
//         return n;
//     }
    
//     return friendsPairing(n-1) + ((n-1) * friendsPairing(n-2));
// }
// int main(){
//     int n; cin>>n;
//     cout<<friendsPairing(n);
// }

// input: 3
// output: 4