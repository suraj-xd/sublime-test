#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool search2D(vector<vector<char>> &grid, int i, int j, string word)
{
  if (grid[i][j] != word[0])
    return false;

  int len = word.size(), n = grid.size(), m = grid[0].size();
  
  // For searching in all 8 direction
  int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  for (int dir = 0; dir < 8; dir++)
  {
    int k, rd = i + x[dir], cd = j + y[dir];
    for (k = 1; k < len; k++)
    {
      if (rd >= n || rd < 0 || cd >= m || cd < 0)
        break;
      if (grid[rd][cd] != word[k])
        break;
      rd += x[dir];
      cd += y[dir];
    }
    if (k == len)
      return true;
  }
  return false;
}

void stringInAGrid()
{
  int n, m;
  cin >> n >> m;
  vector<vector<char>> grid(n, vector<char>(m, '0'));
  for (auto &row : grid)
  {
    for (auto &elem : row)
      cin >> elem;
  }
  int flag = 1;
  string word;
  cin >> word;

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < m; col++)
    {
      if (search2D(grid, row, col, word))
      {
        cout << row << " " << col << ", ";
        flag = 0;
      }
    }
  }
  if (flag)
    cout << -1;
  cout << endl;
}
int main(){
    stringInAGrid();
}
// input:
// 4 3
// a b a b a b e b e b e b
// abe

// output:
// 0 0, 0 2, 1 1,