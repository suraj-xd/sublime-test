#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void dfs(int node,vi &vis,vi adj[],stack<int> &st){
    adj[node] = vis;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,st);
        }
    }
    st.push(node);
}
vi topoSort(int n,vi adj[]){
    stack<int> st;
    vi vis(n+1,0);
    rep(i,0,n){
        if(!vis[i]){
            dfs(i,vis,adj,st);
        }
    }
    vi ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
}
int main(){
   
}

