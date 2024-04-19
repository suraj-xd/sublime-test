// Description

// Given an array of N integers and Q queries. In each query two integers L, R is given, you have to find (A[L] + A[L+1]*2 + A[L+2]*3 + A[L+3]*4...A[R]*(R-L+1)) % 10^9+7.


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll n,q;
ll arr[1000100];
ll mulArr[1000100];
signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
        mulArr[i]=arr[i]*i%mod;
    }   
    for(ll i=1;i<=n;i++){
        arr[i]+=arr[i-1];
        arr[i]%=mod;
        mulArr[i]+=mulArr[i-1];
        mulArr[i]%=mod;
    }
    for(ll i=1;i<=q;i++){
        int l,r;
        cin>>l>>r;
        ll ans = mulArr[r]-mulArr[l-1];
        ans-=(l-1)*(arr[r]-arr[l-1]);
        ans=(ans%mod+mod)%mod;
        cout<<ans<<endl;
    }
}