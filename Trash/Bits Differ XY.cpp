#include<bits/stdc++.h>
typedef long long lli;
using namespace std;
lli mod=1e9+7;

int func(vector<int> &A) {
    int n=A.size();
    int ans=0;
    for(int i=0;i<31;i++)   // loop through each bit
    {
        long long int cnt1=0,cnt2=0;
        for(int j=0;j<n;j++)    // loop through each element
        {
            cnt1+= ( (A[j]&(1<<i)) > 0 ); // count number of set bits
        }
        cnt2=n-cnt1;        // number of unset bits
        cnt1%=mod;
        cnt2%=mod;
        ans = (ans%mod +cnt1*cnt2)%mod;
    }
    return (ans+ans)%mod; // double the answer for every pair
}

void solve()
{
    vector<int> arr={2, 3, 7, 6, 4};
    int ans=func(arr);
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