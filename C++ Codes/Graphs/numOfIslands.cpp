#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void dfs(vvi &grid,int i,int j){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=1){
        return;
    }
    grid[i][j] = 0;
    dfs(grid,i+1,j); // down
    dfs(grid,i-1,j); // top
    dfs(grid,i,j-1); // left
    dfs(grid,i,j+1); // right
}
int numOfIslands(vvi &grid){
    int ans = 0;
    rep(i,0,grid.size()){
        rep(j,0,grid[0].size()){
            if(grid[i][j]==1){
                dfs(grid,i,j);
                ans++;
            }
        }
    }
    return ans;
}
int main(){
    vvi a(4,vi(5,0));
    a = {{1,1,1,1,0},
        {1,1,0,1,0},
        {1,1,0,0,0},
        {0,0,0,0,0}};
    int ans = numOfIslands(a);
    cout<<ans; // 1
}
// number of connected components in actually the number
// of islands