#include <bits/stdc++.h>
using namespace std;
// Topological sort
// value which has the most priority has to be done first;
int main(){
    int n,m; cin>>n>>m;
    int cnt = 0;
    vector<int> indeg(n,0);
    vector<vector<int>> adj(n);
    for (size_t i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }

    queue<int> pq;
    for (size_t i = 0; i < n; i++)
    {
        if(indeg[i]==0){
            pq.push(i);
        }
    }

    while(!pq.empty()){
        cnt++;
        int x = pq.front();
        pq.pop();
        cout<<x<<" ";
        // x--> v
        for(auto it: adj[x]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
        }
    }
}
// input:  4 3
//         0 1
//         1 2
//         2 3

// output: 0 1 2 3


// dont work for cyclic graphs | e.g:
// input: 4 3
        // 0 1
        // 1 2
        // 2 0
        // output: nothing

