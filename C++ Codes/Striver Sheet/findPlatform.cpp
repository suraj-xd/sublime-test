#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int findPlatform(int arr[], int dep[], int n)
{
  int ans = 0;
  sort(arr, arr + n);
  sort(dep, dep + n);

  int count = 0;
  int a = 0, d = 0;

  while (a < n)
  {
    if (arr[a] <= dep[d])
    {
      count++;
      a++;
    }
    else
    {
      count--;
      d++;
    }
    ans = max(ans, count);
  }

  return ans;
}
int main(){
    int n = 3;
    int arr[] = {900, 1100, 1235};
    int dep[] = {1000, 1200, 1240};
    int ans = findPlatform(arr,dep,n);
    cout<<ans;
}   

// Input: n = 6 
// arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
// dep[] = {0910, 1200, 1120, 1130, 1900, 2000}