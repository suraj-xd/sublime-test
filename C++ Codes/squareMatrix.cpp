#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    vvi grid;
    grid = {{1,1,0,0},
            {1,1,1,1},
            {0,1,1,1},
            {0,1,1,1}};
    int r = grid.size();
    int c = grid[0].size();
    int ans = 0;
    vvi dp(r+1,vi(c+1,0));
    rep(i,1,r+1){
        rep(j,1,c+1){
            if(dp[i-1][j-1] = 1){
                dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                ans = max(ans,dp[i][j]);
            }
        }
    }
    cout<<ans;
}