#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int findMin(vector<int> &nums)
  {
    int n = nums.size(), s = 0, e = n - 1;
    int ans = 0;
    while (s <= e)
    {
      int mid = (s + e) / 2;
      if (mid + 1 < n && mid - 1 >= 0 && nums[mid] < nums[mid + 1] && nums[mid] < nums[mid - 1])
        return nums[mid];
      else if (nums[mid] > nums[e])
        s = mid + 1;
      else
        e = mid - 1;
    }
    return nums[s];
  }
int main(){
    vi arr = {3,4,5,1,2};
    int ans = findMin(arr);
    cout<<ans<<endl;
}