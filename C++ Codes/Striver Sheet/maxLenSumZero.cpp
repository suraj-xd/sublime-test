#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// max len of array with sum zero
int maxLen(int A[], int n)
{
  int sum = 0;
  unordered_map<int, int> m;
  int ans = 0;
  for (int i = 0; i < n; ++i)
  { 
    sum+=A[i];
    if (sum == 0)
        ans = max(ans, i + 1);
    if (m.find(sum) != m.end())
    {   
      ans = max(ans, i - m[sum]);
    }
    else
      m[sum] = i;
  }

  return ans;
}
int main(){
    int N = 8;
    int A[N] = {15,-2,2,-8,1,7,10,23};
    cout<<maxLen(A,N);
}

// int maxLen(int A[], int n)
// {
//   int sum = 0;
//   unordered_map<int, int> m;
//   int ans = 0;
//   for (int i = 0; i < n; ++i)
//   { 
//     sum+=A[i];
//     if (sum == 0)
//         ans = max(ans, i + 1);
//     if (m.find(sum) != m.end())
//     {   
//       ans = max(ans, i - m[sum]);
//     }
//     else
//       m[sum] = i;
//   }

//   return ans;
// }