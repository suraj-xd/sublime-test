// Description

// You are given a map of a building, and your task is to count the number of its rooms. The size of the map is n × m squares, and each square is either floor or wall. You can walk left, right, up, and down through the floor squares.


// Sample Input
// 5 8
// ########
// #..#...#
// ####.#.#
// #..#...#
// ########
// Sample Output
// 3



#include<bits/stdc++.h>
using namespace std;

#define ll long long int

const int N = 1010;

int mod = 1e9 + 7;

bool grid[N][N];
bool visited[N][N];
int n, m;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool inside(int x, int y) {
    if(x < 0 || x >= n || y < 0 || y >= m) return false;
    return true;
}

void dfs(int x, int y) {
    visited[x][y] = true;
    for(int i = 0; i < 4; i++) {
        if(inside(x + dx[i], y + dy[i]) && grid[x + dx[i]][y + dy[i]]) {
            if((!visited[x + dx[i]][y + dy[i]])) {
                dfs(x + dx[i], y + dy[i]);
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        for(int j = 0; j < (int)s.length(); j++) {
            if(s[j] == '#') grid[i][j] = false;
            else grid[i][j] = true;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            visited[i][j] = false;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!visited[i][j] && grid[i][j]) {
                dfs(i, j);
                ans++;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}