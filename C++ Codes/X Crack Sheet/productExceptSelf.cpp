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
vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
{
  vector<long long int> left(n), right(n), ans(n);

  long long prod = 1;
  for (int i = 0; i < n; ++i)
  {
    left[i] = prod;
    prod *= nums[i];
  }
  prod = 1;
  for (int i = n - 1; i >= 0; --i)
  {
    right[i] = prod;
    prod *= nums[i];
  }
  for (int i = 0; i < n; ++i)
    ans[i] = left[i] * right[i];
  return ans;
}
int32_t main(){
    vector<long long int> a = {10, 3, 5, 6, 2};
    int n = a.size();
    vector<long long int> anss;
    anss = productExceptSelf(a,n);
    // int n = a.size();
    // int ans = 1;
    // rep(i,0,n){
    //     ans*=a[i];
    // }
    // rep(i,0,n){
    //     anss.push_back(ans/a[i]);
    // }
    for(auto it:anss) cout<<it<<" ";
}
