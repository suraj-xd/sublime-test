#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (auto &i : arr)
      cin >> i;
    int m;
    cin >> m;

    sort(arr.begin(), arr.end());
    for(auto ar:arr) cout<<ar<<" ";
    int ans = arr[m - 1] - arr[0];
    cout<<ans<<endl;
    int i = 1, j = m;
    while (j < n)
    { 
      ans = min(ans, arr[j] - arr[i]);
      cout<<ans<<endl;
      i++;
      j++;
    }
    cout << ans << endl;
  }
  return 0;
}


// 2
// 8
// 3 4 1 9 56 7 9 12
// 5