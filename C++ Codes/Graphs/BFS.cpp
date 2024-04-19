#include <bits/stdc++.h>
using namespace std;
// Breadth search first using queue
const int N = 1e5+2;
bool vis[N];
vector<int> adj[N]; // Array of vectors
int main(){
    for (size_t i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    int n,m;
    cin>>n>>m;
    int x,y;
    for (size_t i = 0; i < m; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;
    q.push(1);
    vis[1] = 1;
    int level = 0;
    vector<int> ans;
    while(!q.empty()){
        int mx = -inf;
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        vector<int> :: iterator it;
        for(auto it=adj[node].begin();it!=adj[node].end();it++){
            if(!vis[*it]){
                mx = max(mx,*it);
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }
}

// input: 7 7
        // 1 2
        // 1 3
        // 2 4
        // 2 5
        // 2 6
        // 2 7
        // 7 3

// output: 1 2 3 4 5 6 7