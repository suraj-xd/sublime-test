#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size(), m = s2.size();
    vvi dp(n+1,vi(m+1,-1));

    rep(i,0,n+1){
        rep(j,0,m+1){
            if(i==0 || j==0){
                dp[i][j] = 0;
                continue;
            }

            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }

    cout<<dp[n][m]<<endl;
    // suraj
    // naraj
    // output: 3
}

// recursive memoization

// int longestCommanSubstr(string s1,string s2, int n,int m,vvi &dp){
//     if(n==0 || m==0) return 0;
//     if(dp[n][m]!=-1) return dp[n][m];
//     if(s1[n-1]==s2[m-1]) dp[n][m] = 1 + longestCommanSubstr(s1,s2,n-1,m-1,dp);
//     else dp[n][m] =  max(longestCommanSubstr(s1,s2,n-1,m,dp),longestCommanSubstr(s1,s2,n,m-1,dp));

//     return dp[n][m];
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     int n = s1.size(), m = s2.size();
//     vvi dp(n+1,vi(m+1,-1));
//     cout<<longestCommanSubstr(s1,s2,n,m,dp);
// }

// recursive

// int longestCommanSubstr(string s1,string s2, int n,int m){
//     if(n==0 || m==0) return 0;

//     if(s1[n-1]==s2[m-1]) return 1 + longestCommanSubstr(s1,s2,n-1,m-1);
//     else return max(longestCommanSubstr(s1,s2,n-1,m),longestCommanSubstr(s1,s2,n,m-1));
// }