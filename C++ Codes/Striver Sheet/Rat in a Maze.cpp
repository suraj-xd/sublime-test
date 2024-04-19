#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class Solution
{
public:
  char Dirs[4] = {'D', 'L', 'R', 'U'};
  int dirs[4][4] = {
      {1, 0}, {0, -1}, {0, 1}, {-1, 0}};
  


  bool valid(int i, int j, vector<vector<int>> &mat)
  {
    return i >= 0 && j >= 0 && i < mat.size() && j < mat[0].size() && mat[i][j];
  }

  void dfs(int r, int c, vector<vector<int>> &mat, vector<string> &ans, string atn)
  {
    if (!valid(r, c, mat))
      return;
    int n = mat.size(), m = mat[0].size();
    if (r == n - 1 && c == m - 1)
    {
      ans.push_back(atn);
      return;
    }

    mat[r][c] = 0;
    for (int i = 0; i < 4; ++i)
      dfs(r + dirs[i][0], c + dirs[i][1], mat, ans, atn + Dirs[i]);

    mat[r][c] = 1;
  }

  vector<string> findPath(vector<vector<int>> &m, int n)
  {
    vector<string> ans;
    dfs(0, 0, m, ans, "");
    
    return ans.size() == 0 ? vector<string>() : ans;
  }
};
int main(){
    
}
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

//  1 1 1 1 1
//  0 0 0 0 1
//  1 1 1 1 1
//  1 1 1 1 0
//  1 1 1 1 1