#include<bits/stdc++.h>
using namespace std;

// using prefix sum
// but running prefix sum, so that, we'll just include the arr[j] - x = y
// such y's are previously seen.

int main() {   
  
  int n,k; cin >> n >> k;
  vector<int> arr(n);
  for(auto &it:arr) cin >> it;
  int p[n];
  for(int i = 0;i < n;i++){
    p[i] = arr[i];
    if(i) p[i] += p[i-1];
  }
  long long ans = 0;
  map<int,int> mp;
  mp[0] = 1;
  for(int i = 0;i < n;i++){
    ans += mp[p[i]-k];
    mp[p[i]]++;
  }

  cout << ans;

  // same way, we can keep a vector in map and print the indexes.
  
}