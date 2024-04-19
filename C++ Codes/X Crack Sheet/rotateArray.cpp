#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
void rotate(vector<int> &nums, int k)
  {
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.begin() + (n - k));
    reverse(nums.begin() + (n - k), nums.end());
    reverse(nums.begin(), nums.end());
  }
int32_t main(){
    speedo
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vi a (n);
        rep(i,0,n) cin>>a[i];
        int s = 0;
        for(int i = a.size()-k;i<n;i++){
            for(int j = i;j>s;j--){
                swap(a[j-1],a[j]);
            }
            s++;
        }
        for(auto it:a) cout<<it<<" ";
        cout<<endl;
    }
}