#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9;
int main(){
    int n,m; cin>>n>>m;
    vector<int> dist(n+1,inf);
    vector<vector<pair<int, int>>> graph(n+1);

    for (size_t i = 0; i < m; i++)
    {
        int u,v,w; cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int src; cin>>src;
    dist[src] = 0;
    set<pair<int,int>> s;
    s.insert({0,src});
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto i: graph[x.second]){
            if(dist[i.first] > dist[x.second] + i.second){
                s.erase({dist[dist[i.first]],i.first});
                dist[i.first] = dist[x.second] + i.second;
                s.insert({dist[i.first],i.first});

            }
        }
    }    
    for(int i=1;i<=n;i++){
        if(dist[i]<inf){
            cout<<dist[i]<<" ";
        }else{
            cout<<-1;
        }
    }
}

// input: 4 4
// 1 2 24
// 1 4 10
// 3 1 3
// 4 3 12
// src = 1

// output: 0 24 3