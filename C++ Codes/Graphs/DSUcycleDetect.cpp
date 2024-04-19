#include <bits/stdc++.h>
using namespace std;
// DEtect cycle in undirected graph using DSU(Disjoint Set Union)
const int N = 1e5+6;
vector<int> parent(N);
vector<int> sz(N);

void make_set(int v){
    parent[v] = v;
    sz[v]  = 1;
}
int findSet(int n){
    if(n==parent[n]){
        return n;
    }
    return parent[n] = findSet(parent[n]);
}
void union_sets(int a, int b){
    a = findSet(a);
    b = findSet(b);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
        }
        parent[b] = a;
        sz[a] += sz[b];     
    }
}
int main(){
    for (size_t i = 0; i < N; i++)
    {
        make_set(i);
    }
    int n,m; cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        edges.push_back({x,y});
    }
    bool cycle = false;
    for(auto i : edges){
        int u = i[0];
        int v = i[1];
        int x = findSet(u);
        int y = findSet(v);
        if(x==y){
            cycle = true;
        }else{
            union_sets(u,v);
        }
    }

    if(cycle){
        cout<<"Cycle is present";
    }else{
        cout<<"Cycle is not present";
    }
}

//input: 0 1
      // 1 2
      // 2 3
      // 3 0

// output: Cycle is Present