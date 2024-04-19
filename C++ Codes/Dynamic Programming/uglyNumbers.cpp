#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// ugly numbers- prime factors of 2,3,5
int main(){
    int n; cin>>n;
    int c2(0),c3(0),c5(0);
    vi dp(n+1);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        dp[i] = min({2*dp[c2],3*dp[c3],5*dp[c5]});
        if(2*dp[c2]==dp[i]){
            c2++;
        }
        if(3*dp[c3]==dp[i]){
            c3++;
        }
        if(5*dp[c5]==dp[i]){
            c5++;
        }
    }

    cout<<dp[n-1];
}

// input:  12
// output: 16