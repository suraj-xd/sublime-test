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
int query(int node,int st,int en,int l,int r){
    if(st > r || en  < l){
        return 0; //   l  .... r  st ... en
    }

    if(l <= st && en <= r){
        return tree[node]; // l...  st   end...  r
    }

    int mid = (st+en)/2;
    int q1 = query(2*node,st,mid,l,r);
    int q2 = query(2*node+1,mid+1,en,l,r);

    return q1+q2;
}
int main(){
    int n;
    cin>>n;
    rep(i,0,n) cin>>a[i];

    build(1,0,n-1);

    while(1){
        int type;
        cin>>type;

        if(type==1){
            int l,r;
            cin>>l>>r;
            int ans = query(1,0,n-1,l,r);
            cout<<ans<<endl;
        }
        if(type==-1){
            break;
        }
    }
}

// input: 8
// 5 3 2 4 1 8 6 10
// 1
// 1 5
// 1
// 2 7
// -1

// output: 18
//         31

// #include <bits/stdc++.h>
// using namespace std;
// #define vi vector<int>
// #define vvi vector<vi>
// #define rep(i,a,b) for(int i=a;i<b;i++)
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
// int query(vi &tree,int node,int st,int end,int l,int r){
//     if(st > r ||end < l){
//         return 0;
//     }

//     if(l <= st && end <= r){
//         return tree[node];
//     }

//     int mid = (st+end)>>1;
//     int q1 = query(tree,2*node,st,mid,l,r);
//     int q2 = query(tree,2*node+1,mid+1,end,l,r);

//     return q1+q2;
// }
// int main(){
//     int n; cin>>n;
//     vi arr(n);
//     rep(i,0,n) cin>>arr[i];
//     vi tree(2*n);
//     build(tree,arr,1,0,n-1);
//     while(1){
//         int t;
//         cin>>t;
//         if(t==-1){
//             break;
//         }
//         int l,r;
//         cin>>l>>r;
//         int ans = query(tree,1,0,n-1,l,r);
//         cout<<ans<<endl;
//     }
// }