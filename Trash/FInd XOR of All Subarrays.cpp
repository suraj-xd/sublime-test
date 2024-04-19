#include <bits/stdc++.h> typedef long long lli; using namespace std; lli mod=1e9+7;
int find_xor_of_subarrays(vector<int> &arr)
{
  int n = arr.size();
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int freq = (i + 1) * (n - i);
    if (freq % 2)
    {
      ans = ans ^ arr[i];
    }
  }
  return ans;
}
void solve()
{
  vector<int> arr = {12, 15, 6, 7, 9, 14, 18};
  int ans = find_xor_of_subarrays(arr);
  cout << ans << endl;
}
int main()
{
  lli t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}

// Method 2

#include <bits/stdc++.h> typedef long long lli;
using namespace std;
lli mod = 1e9 + 7;
int find_xor_of_subarrays(vector<int> &arr)
{
  int n = arr.size();
  int ans = 0;
  if (n % 2 == 0)
    return 0;
  for (int i = 0; i < n; i += 2)
  {
    ans ^= arr[i];
  }
  return ans;
}
void solve()
{
  vector<int> arr = {12, 15, 6, 7, 9, 14, 18};
  int ans = find_xor_of_subarrays(arr);
  cout << ans << endl;
}
int main()
{
  lli t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
