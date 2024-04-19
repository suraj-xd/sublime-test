#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int maxProfit(vector<int> &nums)
  {
    int n = nums.size();
    if (n <= 1)
      return 0;
    vector<int> profit(n, 0);

    int max_so_far = nums[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
      max_so_far = max(max_so_far, nums[i]);
      profit[i] = max(profit[i + 1], max_so_far - nums[i]);
    }

    int min_so_far = nums[0];
    for (int i = 1; i < n; ++i)
    {
      min_so_far = min(min_so_far, nums[i]);
      profit[i] = max(profit[i - 1], profit[i] + nums[i] - min_so_far);
    }
    return profit[n - 1];
  }
int main(){
    vi a = {3,3,5,0,0,3,1,4};
    int n = a.size();
    cout<<maxProfit(a);

    // output: 6
}