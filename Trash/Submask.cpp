s// Code - By - @suraj.xd //


#include<bits/stdc++.h>
using namespace std;


void solve(){

  vi a = {1,2,3};
  for(int mask = 7;mask;mask = ((mask-1)&7)){
    for(int submask = mask;submask;submask = (submask-1)&(mask)){
      for(int i = 0; i< 3;i++){
        if((submask>>i)&1) cout << a[i] << ' ';
      }cout << nline;
    }
  }



}
// ~Driver Code
signed main() {   
  // #ifndef ONLINE_JUDGE 
  //   freopen("Input.txt", "r", stdin);
  //   freopen("Output.txt", "w", stdout); 
  //   freopen("Error.txt", "w", stderr);
  // #endif    
  fastio();
  
  int test = 1;
  if(!oneTestcase) cin>>test;   
  // cout << fixed << setprecision(6);
  for(int tet= 1 ; tet <= test;tet++){
    if(googleComp) google(tet);
    solve();
  }
}
