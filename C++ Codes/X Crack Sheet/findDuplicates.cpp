#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int findDuplicate(vector<int> &nums)
  {
    for (int i = 0; i < nums.size(); ++i)
    {
      int index = abs(nums[i]) - 1;
      if (nums[index] < 0)
        return index + 1;
      else
        nums[index] = -nums[index];
    }
    return 0;
  }
int main(){
    int XOR = 0;
    vi nums = {3,1,3,4,2};
    cout<<findDuplicate(nums);
}
// output:
// 3