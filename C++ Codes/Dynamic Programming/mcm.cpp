#include <bits/stdc++.h>
using namespace std;
// maxtrix chain multiplication
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 102, MOD = 1e9+7;
int a[N];
int dp[N][N];
int main(){
    int n; cin>>n;

    memset(dp,-1,sizeof dp);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++) dp[i][i] = 0;

    for(int l = 2;l<n;l++){
        for(int i = 1; i<n-l+1;i++){
            int  j = i+l-1;
            dp[i][j] = MOD;
            for(int k=i;k<j;k++){
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j]+ a[i-1]*a[k]*a[j]);
            }
        }
    }

    cout<<dp[1][n-1]<<endl;

// input:4
// 10 20 30 20
// output: 12000
}

// recursive memoization

// int a[N];
// int dp[N][N];
// int mcm(int i,int j){
//     if(i==j) return 0;

//     if(dp[i][j]!=-1) return dp[i][j];

//     dp[i][j] = MOD;

//     for(int k=i;k<j;k++){
//         dp[i][j] = min(dp[i][j],mcm(i,k)+mcm(k+1,j)+ a[i-1]*a[k]*a[j]);
//     }

//     return dp[i][j];
// }
// int main(){
//     int n; cin>>n;

//     memset(dp,-1,sizeof dp);

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     cout<<mcm(1,n-1);

// }

// input: 5
// 10 20 30 40 30
// output: 30000