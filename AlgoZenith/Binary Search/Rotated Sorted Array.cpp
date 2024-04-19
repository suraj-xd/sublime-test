// Description

// Given a rotated sorted array. Find the index of the minimum element in the array.

#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> arr;

bool check(int i){
   if(arr[i]<=arr[0])return 1;
   else return 0;
}

void solve(){
   cin>>n;
   arr.resize(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   int lo = 1;
   int hi = n-1;
   int ans = 0;
   while(lo<=hi){
       int mid = (lo+hi)/2;
       if(check(mid)){
           ans = mid;
           hi = mid - 1;
       }else{
           lo = mid + 1;
       }
   }
   cout<<ans<<endl;
}  

signed main(){
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   int _t;cin>>_t;while(_t--)
   solve();
}