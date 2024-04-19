#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int maxHist(vi row, int R, int C)
{
  stack<int> result;

  int top_val;
  int max_area = 0;
  int area = 0;
  int i = 0;
  while (i < C)
  {
    if (result.empty() || row[result.top()] <= row[i])
      result.push(i++);
    else
    {
      top_val = row[result.top()];
      result.pop();
      area = top_val * i;

      if (!result.empty())
        area = top_val * (i - result.top() - 1);
      max_area = max(area, max_area);
    }
  }

  while (!result.empty())
  {
    top_val = row[result.top()];
    result.pop();
    area = top_val * i;
    if (!result.empty())
      area = top_val * (i - result.top() - 1);
    max_area = max(area, max_area);
  }
  return max_area;
}
int maxRect(vvi grid){
    int r  = grid.size();
    int c = grid[0].size();
    int result = maxHist(grid[0],r,c);
    rep(i,1,r){
        rep(j,0,c){
            if(grid[i][j]){
                grid[i][j] += grid[i-1][j];
            }
        }
        result = max(result,maxHist(grid[i],r,c));
    }
    return result;
}
int main(){
    vvi grid;
    grid = {{0, 1 ,1 ,0},
           {1 ,1, 1, 1},
           {1, 1 ,1 ,1},
           {1, 1, 0, 0}};

    int ans = maxRect(grid);
    cout<<ans;
}