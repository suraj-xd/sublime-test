#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int dirs[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
void dfs(vvi &grid,int i,int j,int newcol,int oldcol){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=oldcol || grid[i][j]==0){
        return;
    }
    grid[i][j] = newcol;
    for(auto it:dirs){
        dfs(grid,i+it[0],j+it[1],newcol,oldcol);
    }
}
int main(){
    vvi image(3,vi(3,0));
    image ={{1,1,1},
            {1,1,0},
            {1,0,1}};
    int sr = 1;
    int sc = 1;
    int newcol = 2;
    int oldcol = image[sr][sc];
    dfs(image,sr,sc,newcol,oldcol);
    for(auto it:image){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// 2 2 2 
// 2 2 0 
// 2 0 1