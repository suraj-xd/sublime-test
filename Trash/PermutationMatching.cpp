#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;

void solve(){

  string s,p;
  cin >> s >> p;
  int n = s.size();
  int m = p.size();
  map<char,int> mpp;
  for(auto it:p) mpp[it]++;
  int mismatch = mpp.size();
  debug(mpp)
  for(int i = 0;i < n;i++){
    if(mpp[s[i]]==0) mismatch++;
    mpp[s[i]]--;
    if(mpp[s[i]]==0) mismatch--;

    if(i-m >= 0){
      if(mpp[s[i-m]]==0) mismatch++;
      mpp[s[i-m]]++;
      if(mpp[s[i-m]]==0) mismatch--;
    }
    debug(mismatch)
    if(mismatch==0){
      cout << i-m+1 << ' ';
    }
  }
}
signed main(){
  // solve();
  int _; cin >> _;
  while(_--) solve();
}