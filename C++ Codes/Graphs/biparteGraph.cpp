#include <bits/stdc++.h>
using namespace std;
// Biparte graph: even number of connected comp
int n,m;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool biparte;
void color(int u, int curr){
    if(col[u] !=-1 and col[u]!=curr){
        biparte = false;
        return;
    }
    col[u] = curr;
    if(vis[u]){
        return;
    }
    vis[u] = true;
    for(auto i:adj[u]){
        color(i,curr xor 1);
        // 1 xor 1 = 0
        // 0 xor 1 = 1
    }
}
int main(){
    biparte = true;
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool> (n,0);
    col = vector<int> (n,-1);
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (size_t i = 0; i < n; i++)
    {
        if(!vis[i]){
            color(i,0);
        }
    }
    if(biparte){
        cout<<"Graph is Biparte\n";
    }else{
        cout<<"Graph is not Biparte\n";
    }
    

    
    
}

// input:3 3
        // 0 1
        // 1 2
        // 2 0

// output: Graph is not Biparte

// input: 4 4
        // 0 1
        // 1 2
        // 2 3
        // 3 0

// output: Graph is Biparte