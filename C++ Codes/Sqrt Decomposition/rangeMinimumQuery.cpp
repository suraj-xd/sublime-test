#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// min using sqrt decomposition
const int MOD = 1e9+7;
int main(){
    int n; cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;

    int len = (int)sqrtl(n)+1;
    vi b(len,MOD);

    rep(i,0,n){
        b[i/len] = min(b[i/len],a[i]);
    }

    int q; cin>>q;
    while(q--){
        int l,r; 
        cin>>l>>r;
        int ans = MOD;
        for(int i=l;i<=r;){
            if(i%len==0 && i+len-1<=r){
                ans = min(ans,b[i/len]);
                i+=len;
            }else{
                ans = min(ans,a[i]);
                i++;
            }
        }
        cout<<ans<<endl;
    }
}

// input:
// 3
// 1 4 1
// 2
// 1 1
// 1 2

// output:
// 4
// 1