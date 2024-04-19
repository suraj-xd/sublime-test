#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

vector<int> graph[N];
int sz[N], id[N];
int CUR_ID = 1;
bool visited[N];

void dfs(int cur) {
    if(visited[cur]) return;
    visited[cur] = true;
    id[cur] = CUR_ID;
    sz[CUR_ID]++;
    for(int u : graph[cur])
        dfs(u);
}

signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, q;
    cin >> n >> m >> q;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            dfs(i);
            CUR_ID++;
        }
    }

    while(q--) {
        int t; cin >> t;
        if(t == 1) {
            int x; cin >> x;
            cout << sz[id[x]] << "\n";
        }
        else {
            int x, y;
            cin >> x >> y;
            if(id[x] == id[y]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}