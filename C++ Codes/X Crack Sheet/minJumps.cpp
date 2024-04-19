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
int minJumps(vi arr, int n)
{
  if (n <= 1)
    return 0;
  if (arr[0] == 0)
    return -1;
  int maxReach = arr[0], step = arr[0];
  int jump = 1, i = 1;
  for (i = 1; i < n; ++i)
  {
    if (i == n - 1)
      return jump;
    maxReach = max(maxReach, i + arr[i]);
    step--;
    if (step == 0)
    {
      jump++;
      if (i >= maxReach)
        return -1;
      step = maxReach - i;
    }
  }
  return -1;
}
int32_t main(){
    speedo
    vi arr={1 ,4, 3, 2, 6, 7};
    int n = arr.size();
    cout<<minJumps(arr,n);
}