#include <bits/stdc++.h>
using namespace std;
// Minimum Spanning Tree
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
        int w,x,y; cin>>w>>x>>y;
        edges.push_back({w,x,y});
    }

    sort(edges.begin(),edges.end());
    long long cost =0;
    for(auto i : edges){
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = findSet(u);
        int y = findSet(v);
        if(x==y){
            continue;
        }else{
            cout<<u<<" "<<v<<"\n";
            cost+=w;
            union_sets(u,v);
        }
    }
    cout<<cost<<endl;
}

// input: 8 9
        // 1 2 5
        // 2 3 6
        // 4 3 2
        // 1 4 9
        // 3 5 5
        // 5 6 10
        // 6 7 7
        // 7 8 1
        // 8 5 1


// output: 2 5
        // 4 9
        // 3 6
        // 3 2
        // 6 10
        // 8 1
        // 5 1
        // 28