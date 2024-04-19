#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// low ranges from l now
const int N = 1e5+2, MOD=1e9+7;
int a[N], tree[4*N];

void build(int node,int st,int en){
    if(st == en){
        tree[node] = a[st]; // important step
        return;
    }
    int mid = (st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);

    tree[node] = max(tree[2*node],tree[2*node+1]);
}
int query(int node,int st,int en,int l,int r){
    if(st > r || en  < l){
        return -MOD; //   l  .... r  st ... en
    }

    if(l <= st && en <= r){
        return tree[node]; // l...  st   end...  r
    }

    int mid = (st+en)/2;
    int q1 = query(2*node,st,mid,l,r);
    int q2 = query(2*node+1,mid+1,en,l,r);

    return max(q1,q2);
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

    tree[node] = max(tree[2*node],tree[2*node+1]);
}
int32_t main(){
    int n,m;
    cin>>n>>m;
    rep(i,0,n) cin>>a[i];

    build(1,0,n-1);

    while(m--){
        int type;
        cin>>type;

        if(type==1){
            int idx,val; 
            cin>>idx>>val;
            update(1,0,n-1,idx,val);
        }
        else if(type==2){
            int x,l;
            cin>>x>>l;
            int lo = l,hi = n-1;
            int ans = n;
            while(lo<=hi){
                int mid = (lo+hi)/2;
                if(query(1,0,n-1,lo,mid) < x){
                    lo = mid+1;
                }else{
                    hi = mid-1;
                    ans = min(ans,mid);
                }
            }
            if(ans==n){
                cout<<"-1"<<endl;
            }else{
                cout<<ans<<endl;
            }
        }
    }
}

// input:
// 5 7
// 1 3 2 4 3
// 2 3 0
// 2 3 2
// 1 2 5
// 2 4 1
// 2 5 4
// 1 3 7
// 2 6 1

// output:
// 1
// 3
// 2
// -1
// 3