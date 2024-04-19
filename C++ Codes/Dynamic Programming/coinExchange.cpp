#include <bits/stdc++.h>
using namespace std;
const int N= 1e3+9;
// bottom up iterative approach
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));

    dp[0][0] = 1;

    for (size_t i = 1; i < n+1; i++)
    {
        for(int j=0;j<x+1;j++){
            if(j-a[i-1]>=0){
                dp[i][j] += dp[i][j-a[i-1]];
            }
            dp[i][j] += dp[i-1][j];
        }
    }

    cout<<dp[n][x];
}



// recursive memoization dp

// int dp[N][N];
// int coinExchange(vector<int> &a,int n, int x){
//     if(x==0) return 1;
//     if(x<0) return 0;
//     if(n<=0) return 0;

//     dp[n][x] =  coinExchange(a,n,x-a[n-1])+coinExchange(a,n-1,x);
//     return dp[n][x];
// }
// int main(){
//     for (size_t i = 0; i < N; i++)
//     {
//         for (size_t j = 0; j < N; j++)
//         {
//             dp[i][j] = -1;
//         }
//     }
    
//     int n; cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int x; cin>>x;
//     cout<<coinExchange(a,n,x);
// }



// recursion without dp

// int coinExchange(vector<int> &a,int n, int x){
//     if(x==0) return 1;
//     if(x<0) return 0;
//     if(n<=0) return 0;

//     return coinExchange(a,n,x-a[n-1])+coinExchange(a,n-1,x);
// }
// int main(){
//     int n; cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int x; cin>>x;
//     cout<<coinExchange(a,n,x);
// }

// input: 3
//     1 2 3
//     6

// output: 7