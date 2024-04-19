#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void dfs(vector<int> &A, int i, int B, int s, vector<vector<int>> &ans, vector<int> curr)
{
  if (s > B)
    return;
  if (s == B)
  {
    ans.push_back(curr);
    return;
  }
  if (i == A.size())
    return;

  while (i < A.size() && s <= B)
  {
    curr.push_back(A[i]);

    // recur for next numbers
    dfs(A, i, B, s + A[i], ans, curr);
    i++;

    // Remove number from list (backtracking)
    curr.pop_back();
  }
}

vector<vector<int>> combinationSum(vector<int> &A, int B)
{
  set<int> temp(A.begin(), A.end());
  A = vector<int>(temp.begin(), temp.end());

  vector<vector<int>> ans;
  dfs(A, 0, B, 0, ans, {});
  return ans;
}
int main(){
    vvi ans;
    vi nums = {7,2,6,5};
    ans = combinationSum(nums,16);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}