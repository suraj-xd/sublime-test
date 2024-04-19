#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// codeforces
const int N = 1e5+2,MOD = 1e9+7;
int a[N];
pair<int,int>tree[4*N];

void build(int node,int st,int en){
    if(st == en){
        tree[node].first = a[st]; // important step
        tree[node].second = 1;
        return;
    }
    int mid = (st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);

    if(tree[2*node].first < tree[2*node+1].first){
        tree[node].first = tree[2*node].first;
        tree[node].second = tree[2*node].second;
    }else if(tree[2*node].first > tree[2*node+1].first){
        tree[node].first = tree[2*node+1].first;
        tree[node].second = tree[2*node+1].second;
    }else{
        tree[node].first = tree[2*node].first;
        tree[node].second = tree[2*node].second+tree[2*node+1].second;
    }
}
pair<int,int> query(int node,int st,int en,int l,int r){
    if(st > r || en  < l){
        return {MOD,-1};
    }

    if(l <= st && en <= r){
        return tree[node]; // l...  st   end...  r
    }

    int mid = (st+en)/2;
    pair<int,int> q1 = query(2*node,st,mid,l,r);
    pair<int,int> q2 = query(2*node+1,mid+1,en,l,r);
    pair<int,int> q;
    if(q1.first < q2.first){
        q = q1;
    }else if(q1.first > q2.first){
        q = q2;
    }else{
        q.first = q1.first;
        q.second = q1.second+q2.second;
    }

    return q;
}
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        a[st] = val;
        tree[node].first = val;
        tree[node].second = 1;
        return;
    }

    int mid =( st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }else{
        update(2*node+1,mid+1,en,idx,val);
    }
    if(tree[2*node].first < tree[2*node+1].first){
        tree[node].first = tree[2*node].first;
        tree[node].second = tree[2*node].second;
    }else if(tree[2*node+1].first < tree[2*node].first){
        tree[node].first = tree[2*node+1].first;
        tree[node].second = tree[2*node+1].second;
    }else{
        tree[node].first = tree[2*node].first;
        tree[node].second = tree[2*node].second+tree[2*node+1].second;
    }
}
int main(){
    int n,m;
    cin>>n>>m;

    rep(i,0,n){
        cin>>a[i];
    }
    build(1,0,n-1);
    while(m--){
        int type;
        cin>>type;
        if(type==1){
            //update
            int idx,val;
            cin>>idx>>val;
            update(1,0,n-1,idx,val);
        }else if(type==2){
            // query
            int l,r;
            cin>>l>>r;
            pair<int,int> ans = query(1,0,n-1,l,r);
            cout<<ans.first<<" "<<ans.second<<endl;
        }

    }
}

// input: 
// 5 5
// 3 4 3 5 2
// 2 0 3
// 1 1 2
// 2 0 3
// 1 0 2
// 2 0 5

// output:
// 3 2
// 2 1
// 2 3