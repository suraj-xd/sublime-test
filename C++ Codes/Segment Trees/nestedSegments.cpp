#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// number of segments occuring twice in the range
const int N = 1e5+2;
int a[N], tree[4*N];
struct triplet{
    int l,r,idx;    
};
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
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        a[st] = val;
        tree[node] = val;
        return;
    }

    int mid =( st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }else{
        update(2*node+1,mid+1,en,idx,val);
    }

    tree[node] = tree[2*node]+tree[2*node+1];
}
bool compare(triplet t1,triplet t2){
    return t1.r < t2.r;
}
int main(){
    int n; cin>>n;
    triplet t1;
    t1.l = t1.r = -1;
    vector<triplet> t(n,t1);
    int x;
    rep(i,0,2*n){
        cin>>x;
        if(t[x].l==-1){
            t[x-1].l = i;
        }else{
            t[x-1].r = i;
        }
        t[x-1].idx = x;
    }

    sort(t.begin(),t.end(),compare);

    vector<int> ans(n);

    rep(i,0,n){
        ans[t[i].idx-1] = query(1,0,2*n-1,t[i].l,t[i].r);
        update(1,0,2*n-1,t[i].l,1);
    }

    rep(i,0,n){
        cout<<ans[i]<<" ";
    }
}

// input:
// 5
// 5 1 2 2 3 1 3 4 5 4

// output:
// 1 0 0 0 3