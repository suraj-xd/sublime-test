#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int dirs[4][4] = {{1,0},{0,1},{-1,0},{0,-1}};
int orangesRotting(vvi &grid){
    queue<vi> q;
    int ans = 0;
    rep(i,0,grid.size()){
        rep(j,0,grid[0].size()){
            if(grid[i][j]==2){
                q.push({i,j,0});
            }
        }
    }
    while(q.size()){
        auto curr = q.front();
        q.pop();
        int i = curr[0],j = curr[1],time = curr[2];
        ans = max(ans,time);
        for(auto &d:dirs){
            int nextI = i+d[0],nextJ = j+d[1];
            if(nextI>=0 && nextJ>=0 && nextI< grid.size() && nextJ<grid[0].size()){
                if(grid[nextI][nextJ]==1){
                    grid[nextI][nextJ] = 2;
                    q.push({nextI,nextJ,time+1});
                }
            }
        }
    }
    rep(i,0,grid.size()){
        rep(j,0,grid[0].size()){
            if(grid[i][j]==1){
                return -1;
            }
        }
    }
    return ans;
}
int main(){
    // int dirs[4][4] = {{1,0},{-1,0},{0,1},{0,-1}};
    vvi a(3,vi(3));
    a =             {{2,1,1},
                    {1,1,0},
                    {0,1,1}};
    int ans = orangesRotting(a);
    cout<<ans;
}

// output: 4