#include "bits/stdc++.h"
using namespace std;
// Cycle detection in Graph
bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &vis, int parent){
    vis[src] = 1;
    for (auto it: adj[src])
    {
        if(it!=parent){
            if(vis[it]){
                return true;
            }
            if(!vis[it] and isCycle(it,adj,vis,src)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n,m; cin>>n>>m;
    int cnt = 0;
    vector<vector<int>> adj(n);
    for (size_t i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cycle = false;
    vector<bool> vis(n,false);
    for (size_t i = 0; i < n; i++)
    {
        if(!vis[i] and isCycle(i,adj,vis,-1)){
            cycle = true;
            break;
        }
    }
    if(cycle){
        cout<<"Cycle is Present"<<endl;
    }else{
        cout<<"Cycle is not Present"<<endl;
    }
    
}

// input: 4 3
//         0 1
//         1 2
//         2 0

// output: Cycle is Present

// input: 4 3
//         0 1
//         1 2
//         2 3

// output: Cycle is not Present