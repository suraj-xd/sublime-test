#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e5+2;
int dp[N];
int lis(vi &a, int n){

    if(dp[n]!=-1) return dp[n];
    
    rep(i,0,n)
        if(a[n]>a[i])
            dp[n] = max(dp[n],1+lis(a,i));

    return dp[n];
}
int main(){
    rep(i,0,N) dp[i]=-1;
    int n; cin>>n;
    vi a(n);
    rep(i,0,n) cin>>a[i];
    cout<<lis(a,n-1);
}
// tabulation method

// int n; cin>>n;
//     vi a(n);
//     rep(i,0,n) cin>>a[i];

//     vi dp(n+1,1);

//     int ans = 1;
//     rep(i,0,n){
//         rep(j,0,i)
//             if(a[i]>a[j]){
//                 dp[n] = max(dp[i],1+dp[j]); 
//             }
//         ans = max(ans,dp[i]);
//     }

//     cout<<ans<<endl;
//input:  9
//        10 22 9 33 21 50 52 60 80
//output: 5