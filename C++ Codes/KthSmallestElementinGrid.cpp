#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int const MAX = 50;
int KthElementGrid(int mat[MAX][MAX],int n,int k){
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    rep(i,0,n){
        pq.push({mat[0][i],{0,i}});
    }
    rep(i,0,k-1){
        auto x = pq.top();
        pq.pop();
        if(x.second.first<n-1){
            pq.push({mat[x.second.first+1][x.second.second],{x.second.first+1,x.second.second}});
        }
    }
    return pq.top().first;
}
int main(){
    
}