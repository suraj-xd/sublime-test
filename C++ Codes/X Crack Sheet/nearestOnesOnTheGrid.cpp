#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int dirs[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
vvi nearestOnesOnTheGrid(vvi &grid){
    int n = grid.size(), m = grid[0].size();
    queue<vi> q;
    rep(i,0,n){
        rep(j,0,m){
            if(grid[i][j]==1){
                q.push({i,j});
                grid[i][j]=-1;
            }
        }
    }

    int dist = 0;

    while(!q.empty()){
        dist++;
        for(int i=q.size();i>0;--i){    
            auto curr = q.front();
            q.pop();
            int x = curr[0],y = curr[1];
            for(auto &dis:dirs){
                int nx = x+dis[0], ny =  y+dis[1];
                if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==0){
                    q.push({nx,ny});
                    grid[nx][ny]=dist;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      if (grid[i][j] == -1)
        grid[i][j] = 0;
    }
  }
  return grid;
}
int main(){
    vvi grid;
    grid = {{1,0,1},{1,1,0},{1,0,0}};
    vvi ans = nearestOneOneTheGrid(grid);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// 0 1 0 
// 0 0 1 
// 0 1 2