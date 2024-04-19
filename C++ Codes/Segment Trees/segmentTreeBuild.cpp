#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e5+2;
int a[N], tree[4*N];

void build(int node,int st,int en){
    if(st == en){
        tree[node] = a[st]; // important step
        return;
    }
    int mid = (st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);

    tree[node] = tree[2*node] + tree[2*node+1];
}
int main(){
    int n;
    cin>>n;
    rep(i,0,n) cin>>a[i];


    build(1,0,n-1);

    rep(i,1,15){
        cout<<tree[i]<<" ";
    }
}


// void build(vi &tree,vi &arr,int node,int st,int end){
//     if(st==end){
//         tree[node] = arr[st];
//         return;
//     }

//     int mid = (st+end)/2;
//     build(tree,arr,2*node,st,mid);
//     build(tree,arr,2*node+1,mid+1,end);

//     tree[node] = tree[2*node]+tree[2*node+1]; 
// }
// int main(){
//     int n; cin>>n;
//     vi arr(n);
//     rep(i,0,n) cin>>arr[i];
//     vi tree(2*n);
//     build(tree,arr,1,0,n-1);

//     for(auto it:tree) {
//         cout<<it<<" ";
//     }
// }