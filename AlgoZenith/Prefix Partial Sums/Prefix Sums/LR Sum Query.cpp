// Description

// Given an array of N integers and Q queries. In each query two integers L, R is given, you have to find (A[L] + A[L+1] + A[L+2] + A[L+3]...A[R]) % 10^9+7.


#include "bits/stdc++.h"
using namespace std;
#define mod 1000000007
typedef long long ll;
const int N = 1000001;
int arr[N];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    ll prefixSum[n+1];
    prefixSum[0] = 0;
    for(int i=1;i<=n;i++){
        prefixSum[i] = prefixSum[i-1]+arr[i];
        if(prefixSum[i]<0)
            prefixSum[i]+=mod;
        if(prefixSum[i]>=mod)
            prefixSum[i]-=mod;
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll ans = prefixSum[r]-prefixSum[l-1];
        if(ans<0)
            ans+=mod;
        if(ans>=mod)
            ans-=mod;
        cout<<ans<<"\n";
    }
}