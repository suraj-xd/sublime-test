#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e5+2;
class grp{
    public:
    int pref,suff,sum,ans;
    grp(int pre,int suf,int su,int an){
        this->pref = pre;
        this->ans = an;
        this->suff = suf;
        this->sum = su;
    }
};
int a[N];
grp tree[4*N];
void build(int node,int st,int en){
    if(st == en){
        if(a[st]<=0){
            tree[node] = grp(0,0,a[st],0);
        }else{
            tree[node] = grp(a[st],a[st],a[st],a[st]);
        }
        return;
    }

    int mid = (st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);

    int sum = tree[2*node].sum + tree[2*node+1].sum;
    int pref = max(tree[2*node].pref,tree[2*node].sum + tree[2*node+1].pref);
    int suff = max(tree[2*node+1].suff,tree[2*node+1].sum + tree[2*node].suff);
    int ans = max(tree[2*node].suff+tree[2*node+1].pref,max(tree[2*node+1].ans,tree[2*node].ans));


    tree[node] = grp(pref,suff,sum,ans);
}
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        a[st] = val;
        if(a[st]<=0){
            tree[node] = grp(0,0,a[st],0);
        }else{
            tree[node] = grp(a[st],a[st],a[st],a[st]);
        }
        return;
    }

    int mid =( st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }else{
        update(2*node+1,mid+1,en,idx,val);
    }

    int sum = tree[2*node].sum + tree[2*node+1].sum;
    int pref = max(tree[2*node].pref,tree[2*node].sum + tree[2*node+1].pref);
    int suff = max(tree[2*node+1].suff,tree[2*node+1].sum + tree[2*node].suff);
    int ans = max(tree[2*node].suff+tree[2*node+1].pref,max(tree[2*node+1].ans,tree[2*node].ans));


    tree[node] = grp(pref,suff,sum,ans);
}
int32_t main(){
    int n,m;
    cin>>n>>m;
    rep(i,0,n) cin>>a[i];

    build(1,0,n-1);   

    cout<<tree[1].ans<<endl;

    rep(i,0,m){
        int idx,val;
        cin>>idx>>val;
        update(1,0,n-1,idx,val);
        cout<<tree[1].ans<<endl;
    }
}

// input:
// 5 2
// 5 -4 4 3 -5
// 4 3
// 3 -1

// output:
// 8
// 11
// 7