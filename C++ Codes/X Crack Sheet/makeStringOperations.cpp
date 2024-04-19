#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int Min(int x,int y,int z) {return min(x,min(y,z));}
int editDist(string s1,string s2,int m,int n,vvi &dp){
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    if(n==0){
        dp[m][n] = m;
        return m;
    }
    if(m==0){
        dp[m][n] = n;
        return n;
    }

    if(s1[m-1]== s2[n-1]){
        int ans = editDist(s1,s2,m-1,n-1,dp);
        dp[m][n] = ans;
        return ans;
    }

    int ans = 1 + Min(editDist(s1,s2,m,n-1,dp),editDist(s1,s2,m-1,n,dp),editDist(s1,s2,m-1,n-1,dp));
    dp[m][n] = ans;
    return ans;
}
int makeStringOperations(string s, string t)
{
  int m = s.size(), n = t.size();
  vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
  editDist(s, t, m, n, dp);
  return dp[m][n];
  ;
}
int main(){
    string s = "geek", t = "gesek";
    cout<<makeStringOperations(s,t);
}
// output: 1