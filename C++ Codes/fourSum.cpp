#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vector<vector<int>> fourSum(vector<int> &arr, int target)
{
  vector<vector<int>> ans;
  set<vector<int>> s;
  sort(arr.begin(), arr.end());

  int n = arr.size();

  for (int i = 0; i <= n - 4; i++)
  {
    for (int j = i + 1; j <= n - 3; j++)
    {

      int left = j + 1;
      int right = n - 1;

      while (left < right)
      {
        int sum = arr[i] + arr[j] + arr[left] + arr[right];

        if (sum == target)
        {
          vector<int> temp;
          temp.push_back(arr[i]);
          temp.push_back(arr[j]);
          temp.push_back(arr[left]);
          temp.push_back(arr[right]);
          left++;
          right--;
          s.insert(temp);
        }
        else if (sum < target)
          left++;
        else
          right--;
      }
    }
  }
  set<vector<int>>::iterator itr;
  for (itr = s.begin(); itr != s.end(); itr++)
    ans.push_back(*itr);
  return ans;
}
int main(){
    vi arr = {10,2,3,4,5,7,8};
    int k = 23;
    fourSum(arr,k);
}