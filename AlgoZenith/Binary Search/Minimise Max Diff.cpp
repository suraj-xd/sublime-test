// Description

// You are given N distinct points on the number line in a sorted array A. You can place at most K more points on the Line (Integer coordinates only). You have to make the maximum separation between any two consecutive points in the final configuration as minimum as possible. Output this minimal value.  

// Note - You can place the points anywhere you like, but you cannot place more than one point at the same position on the line. 


#include <bits/stdc++.h>
using namespace std;
#define int long long
int arr[100001];
int n,k;
bool check(int maxDiffAllowed){
int pointsRequired = 0;
int i = 1;
while(i<n){
 pointsRequired+=(arr[i]-arr[i-1]+maxDiffAllowed-1)/maxDiffAllowed - 1;
 i++;
}
return pointsRequired<=k;
}
signed main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int testcases;
cin>>testcases;
while(testcases--){
 cin>>n>>k;
 for(int i=0;i<n;i++)
  cin>>arr[i];
 int low = 1,high = 1e9;
 int ans = high;
 while(low<=high){
  int mid = (low+high)/2;
  if(check(mid))
   ans = mid,high = mid-1;
  else
   low = mid+1;
 }
 cout<<ans<<"\n";
}
}