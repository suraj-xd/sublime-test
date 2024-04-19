#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vector<int> countBits(int num)
  {
    vector<int> ans(num + 1, 0);
    for (int i = 1;  i <= num; ++i)
    {   
      ans[i] = ans[i / 2] + i % 2;
    }
    return ans;
  }
int main(){
    vi ans = countBits(5);
    for(auto it:ans) cout<<it<<" ";
}
// brute force

// int countbits(int n){
//     int cnt = 0;
//     while(n){
//         if(n&1){
//             cnt++;
//         }
//         n = (n>>1);
//     }
//     return cnt;
// }
// vi countBits(int num){
//     vi ans;
//     rep(i,0,num+1){
//         ans.push_back(countbits(i));
//     }
//     return ans;
// }
// output:  
// 0 1 1 2 1 2

// preprocess bits 
const int N = 2e5+1;
ll bits[N][19];
void presolve(){
  rep(i,1,19) bits[0][i] = 0;
  for(int i = 1;i < N;i++){
    ll in = 0;
    ll x = i;
    while(x>0){
      bits[i][in] = x%2 + bits[i-1][in];
      in++;
      x/=2;
    }
  }
}
void solve(){



  ll l,r;
    cin>>l>>r;
    ll m=INT_MIN;
    rep(i,0,19)
    {
        m=max(m,bits[r][i]-bits[l-1][i]);
    }
    cout<<r-l+1-m<<"\n";

}
