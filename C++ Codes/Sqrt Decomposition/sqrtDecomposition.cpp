#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n; cin>>n;

    vi a(n);
    for(auto &it:a) cin>>it;

    int len = sqrtl(n)+1;
    vi b(len);

    rep(i,0,n){
        b[i/len] += a[i];
    }

    int q; cin>>q;

    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        int ans = 0;
        for(int i=l;i<=r;){
            if((i%len)==0 && i+len-1<=r){
                ans+=b[i/len];
                i+=len;
            }else{
                ans+=a[i];
                i++;
            }
        }
        cout<<ans<<endl;
    }
}

// input:
// 9
// 1 5 -2 6 8 -7 2 1 11
// 2
// 1 6
// 2 7

// output:
// 11
// 12