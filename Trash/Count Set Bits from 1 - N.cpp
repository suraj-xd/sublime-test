#include<bits/stdc++.h>
typedef long long lli;
using namespace std;
lli mod=1e9+7;
// from 0 - N
int solve(int A)
{
    int sz=2;               // size of group
    int ans=0;
    for(int i=0;i<31;i++)
    {
        if((1<<i) > A)      // break if no bits are there
        {
            break;
        }
        long long int k=A/sz;// count of perfectly included groups
        long long int temp = (k*(sz/2))%mod; // count of 1s
        ans = (ans+temp)%mod;
        k=A%sz;             // amount of partial group
        int p=sz/2;
        if(k>=p)
        {
            k=k-p+1;        // count of 1s in partial group
            ans = (ans+k)%mod;
        }
        sz=sz*2;            // increase size by 2 for next bit
    }
    return ans%mod;
}

void solve()
{
    int n=5;
    int ans=solve(n);
    cout<<ans<<endl;
}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0; 
}