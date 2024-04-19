#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int n,m;
vector<vector<int>> adj;
bool bfs(int src,int col[]){
    queue<int> q;
    q.push(src);
    col[src] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:adj[node]){
            if(col[it]==-1){
                col[it] = 1 - col[node];
                q.push(it);
            }else if(col[it]==col[node]){
                return false;
            }
        }
    }
    return true;
}
bool isBiparte(int n){
    int col[n];
    memset(col,-1,sizeof col);
    rep(i,0,n){
        if(col[i]==-1){
            if(!bfs(i,col)){
                return false;
            }
        }
    }
    return true;
}
int main(){
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(isBiparte(n)){
        cout<<"Graph is Biparte\n";
    }else{
        cout<<"Graph is not Biparte\n";
    }
}