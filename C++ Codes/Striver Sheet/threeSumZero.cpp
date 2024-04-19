#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vector<vector<int>> threeSum(vector<int> &nums)
  {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    int i = 0;

    while (i < n - 2)
    {
      int j = i + 1;
      int k = n - 1;

      while (j < k)
      {
        if (nums[j] + nums[k] == -nums[i])
        {
          ans.push_back({nums[i], nums[j], nums[k]});
          while (j < k && nums[j] == nums[j + 1])
            j++;
          while (j < k && nums[k] == nums[k - 1])
            k--;
          j++;
          k--;
        }
        else if (nums[j] + nums[k] < -nums[i])
        {
          while (j < k && nums[j] == nums[j + 1])
            j++;
          j++;
        }
        else
        {
          while (j < k && nums[k] == nums[k - 1])
            k--;
          k--;
        }
      }

      while (i < n - 1 && nums[i] == nums[i + 1])
        i++;
      i++;
    }

    return ans;
  }
int main(){
    vi nums = {-1,0,1,2,-1,-4};
    vvi ans = threeSum(nums);
    for(auto it: ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}