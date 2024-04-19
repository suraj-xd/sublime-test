#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+2, MOD = 1e9+7;
// using dp iterative

int main(){
    int n; cin>>n;
    vector<int> dp(n+1,MOD);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[0] = 0;

    for(int i=1;i*i<=n;i++){
        for (size_t j = 0; i*i+j <=n ; j++)
        {
            dp[i*i+j] = min(dp[i*i+j],1+dp[j]); 
        }
    }
    cout<<dp[n];
}

// using dp recursive

// int dp[N];
// int minSquare(int n){
//     if(n==0 || n==1 || n==2 || n==3){
//         return n;
//     }
//     if(dp[n]!=MOD){
//         return dp[n];
//     }
//     for(int i=1;i*i<=n;i++){
//         dp[n] = min(dp[n],1+minSquare(n-i*i));
//     }
//     return dp[n];
// }
// int main(){
//     for (size_t i = 0; i <= N; i++)
//     {
//         dp[i]=MOD;
//     }    
//     int n; cin>>n;
//     cout<<minSquare(n);
// }

// without dp
// int minSquare(int n){
//     if(n==0 || n==1 || n==2 || n==3){
//         return n;
//     }
//     int ans = MOD;
//     for(int i=1;i*i<n;i++){
//         ans = min(ans,1+minSquare(n-i*i));
//     }
//     return ans;
// }