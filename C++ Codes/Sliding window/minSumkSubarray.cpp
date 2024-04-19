#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
int main(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];   

    int sum = 0, ans =INT_MAX;

    rep(i,0,k){
        sum+=a[i];
    }

    ans = min(ans,sum);

    rep(i,1,n-k+1){
        sum-=a[i-1];
        sum+=a[i+k-1];
        ans = min(ans,sum);
    }

    cout<<ans<<endl;
//      testcase: 8 3
//               -2 10 1 3 2 -1 4 5

//      output- 4
}