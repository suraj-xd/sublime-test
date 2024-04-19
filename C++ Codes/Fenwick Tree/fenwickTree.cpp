#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// fenwwick tree
// sum uptill l,r & Point query
int n;
vi bit;
int query(int idx){
    int ans = 0;
    if(idx>0){
        ans+=bit[idx];
        idx-=(idx & (-idx));
    }
    return ans;
}
void update(int idx,int val){
    while(idx<=n){
        bit[idx] +=val;
        idx+= (idx & (-idx));
    }
}
int main(){
    cin>>n;
    bit = vi(n+1);
    vi a(n+1);
    rep(i,1,n+1){
        cin>>a[i];
        update(i,a[i]);
    }
    int q; cin>>q;
    while(q--){
        int c; cin>>c;
        if(c==1){
            int l,r;
            cin>>l>>r;
            int ans = query(r)-query(l-1);
            cout<<ans<<endl;
        }else if(c==2){
            int idx,val;
            cin>>idx>>val;
            update(idx,-a[idx]);
            a[idx] = val;
            update(idx,val);
        }
    }
}
// input:
// 4
// 1 2 3 4
// 3
// 1 1 4
// 2 1 0
// 1 1 4

// output:
// 10
// 9