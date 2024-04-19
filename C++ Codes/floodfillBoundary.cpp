#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int dirs[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
void dfs(vvi &grid,int i,int j){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=1){
        return;
    }
    grid[i][j] = 0;
    for(auto it:dirs){
        dfs(grid,i+it[0],j+it[1]);
    }
}
void floorfill(vvi &grid,int row,int col){
    rep(i,0,col){
        dfs(grid,0,i);   // upper column
        dfs(grid,col,i); // bottom column
    }
    rep(i,0,row){
        dfs(grid,i,0);   // left side row
        dfs(grid,i,row); // right side row
    }
}
int main(){
    vvi grid(4,vi(5,0));
    grid ={{1,1,0,0,1},
            {0,1,0,1,0},
            {1,0,1,0,0},
            {1,0,0,1,1}};
    int row = grid.size();
    int col = grid[0].size();
    floorfill(grid,row,col);
    for(auto it:grid){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// 0 0 0 0 0 
// 0 0 0 1 0 
// 0 0 1 0 0 
// 0 0 0 0 0