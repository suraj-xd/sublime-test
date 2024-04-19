#include "bits/stdc++.h"
using namespace std;
// Cycle detection in Graph Directed graph
bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &vis, vector<int> &Stack){
    Stack[src] = true;
    if(!vis[src]){
        vis[src] = true;
        for(auto i:adj[src]){
            if(!vis[i] and isCycle(i,adj,vis,Stack)){
                return true;
            }
            if(Stack[i]){
                return true;
            }
        }
    }
    Stack[src] = false;
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
    }
    bool cycle = false;
    vector<int> Stack(n,0);
    vector<bool> vis(n,false);
    for (size_t i = 0; i < n; i++)
    {
        if(!vis[i] and isCycle(i,adj,vis,Stack)){
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
//         2 1

// output: Cycle is Present

// input: 4 3
//         0 1
//         1 2
//         2 3

// output: Cycle is not Present