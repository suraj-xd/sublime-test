#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int jumpGame(vi a,int n){
    vi dp(n,INT_MAX);
    dp[0] = 0;
    rep(i,0,n-1){
        if(a[i]==0 || dp[i]==INT_MAX) continue;
        for(int j=1;j<=a[i] && i+j<n;j++){
            dp[i+j] = min(dp[i+j],1 + dp[i]);
        }
    }
    return dp[n-1];
}
int32_t main(){
    vi a  = {2,3,1,1,4};
    cout<<jumpGame(a,a.size());
// 2
}