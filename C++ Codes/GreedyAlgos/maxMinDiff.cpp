#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
// max difference, min difference from same subarray;
int main(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long mx = 0, mn = 0;

    rep(i,0,n/2){
        mx+= (a[n/2+i]-a[i]);
        mn+= (a[2*i+1]-a[2*i]);
    }

    cout<<mn<<" "<<mx<<endl;
}

// input: 4
// 12 -3 10 0
// output: 5 25