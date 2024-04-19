#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
// vvi fourSum(vi &nums, int target){
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     vvi ans;
//     rep(i,0,n-3){
//         rep(j,0,n-2){
//             int tar = target - nums[j] - nums[i];
//             int k = j+1, l = n-1;
//             while(k<l){
//                 if(nums[k]+nums[l]==tar){
//                     ans.push_back({nums[i],nums[j],nums[k],nums[l]});
//                     while(k<l && nums[k]==nums[k+1])
//                         k++;
//                     while(k<l && nums[l]==nums[l-1])
//                         l--;
//                     k++;
//                     l--;
//                 }
//             }
//             while(j<n-2 && nums[j]==nums[j+1]){
//                 j++;
//             }
//         }
//         while(i<n-3 && nums[i]==nums[i+1])
//             i++;
//     }
//     return ans;
// }
vector<vector<int>> fourSum(vector<int> &nums, int target)
  {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n - 3; ++i)
    {
      for (int j = i + 1; j < n - 2; ++j)
      {
        int tar = target - nums[j] - nums[i];

        int k = j + 1, l = n - 1;
        while (k < l)
        {
          if (nums[k] + nums[l] == tar)
          {
            ans.push_back({nums[i], nums[j], nums[k], nums[l]});
            while (k < l && nums[k] == nums[k + 1])
              k++;
            while (k < l && nums[l] == nums[l - 1])
              l--;
            k++;
            l--;
          }
          else if (nums[k] + nums[l] < tar)
            k++;
          else
            l--;
        }
        while (j < n - 2 && nums[j] == nums[j + 1])
          j++;
      }
      while (i < n - 3 && nums[i] == nums[i + 1])
        i++;
    }
    return ans;
  }
int main(){
    vi nums = {1,0,-1,0,-2,2};
    int target = 0;
    vvi ans = fourSum(nums,target);
    for(auto it:ans)
        for(auto i:it)
            cout<<i<<" ";
        cout<<endl;
}
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]