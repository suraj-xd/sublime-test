#include <bits/stdc++.h>
using namespace std;
// Depth search first using recursion
const int N = 1e5+2;
bool vis[N];
vector<int> adj[N]; // Array of vectors

vector<int> :: iterator it;
void dfs(int node){
    // preorder
    vis[node] = 1;
    cout<<node<<" "; 
    // inorder
    for(auto it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }
    // postorder
    // cout<<node<<" "; 

}

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

    dfs(1);
}

// input: 7 7
//         1 2
//         1 3
//         2 4
//         2 5
//         2 6
//         2 7
//         7 3


// preorder: 1 2 4 5 6 7 3
// postorder: 4 5 6 3 7 2 1