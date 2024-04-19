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
        else if(type==2){
            int idx,val;
            cin>>idx>>val;
            update(1,0,n-1,idx,val);
            int ans = query(1,0,n-1,0,n-1);
            cout<<ans<<endl;
        }
        else{
            break;
        }
    }
}