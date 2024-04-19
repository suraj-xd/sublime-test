#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
long long countTriplets(long long arr[], int n, long long sum)
{
  sort(arr, arr + n);
  long long count = 0;
  for (int i = 0; i < n; ++i)
  {
    int j = i + 1, k = n - 1;
    while (j < k)
    {
      if (arr[i] + arr[j] + arr[k] < sum)
      {
        count += (k - j);
        j++;
      }
      else
        k--;
    }
  }
  return count;
}
int main(){
    int N = 5, X = 12;
    int arr[] = {5, 1, 3, 4, 7};
    
}

// output: 4            
