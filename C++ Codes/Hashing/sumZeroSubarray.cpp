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
    int n;
    cin>>n;

    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    map<int,int> cnt;
    int prefSum = 0;
    rep(i,0,n){
        prefSum+=a[i];
        cnt[prefSum]++;
    }

    map<int, int > :: iterator it;
    int ans = 0;
    for(it=cnt.begin();it!=cnt.end();it++){
        int c = it->ss;

        ans+=(c*(c-1))/2;

        if(it->ff==0)
            ans+=it->ss;
    }

    cout<<ans<<endl;

    // testcase: 4
            // 1 -1 1 -1

    // output- 4
}