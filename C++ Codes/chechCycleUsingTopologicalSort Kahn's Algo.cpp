#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool checkCycle(vi adj[],int n){
    queue<int> q;
    vi indeg(n+1,0);
    rep(i,0,n){
        for(auto it:adj[i]){
            indeg[it]++;
        }
    }
    rep(i,0,n){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    int cnt   = 0;
    while(!q.empty()){
        int node = q.front();
        cnt++;
        q.pop();
        for(auto it:adj[node]){
            indeg[it]--;
            if(indeg[it]==0){
                q.push(it);
            }
        }
    }
    if(cnt==n) return false;
    else return true;
}
int main(){
    
}