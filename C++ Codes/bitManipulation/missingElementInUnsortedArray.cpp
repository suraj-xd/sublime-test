#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n) cin>>a[i];
    int XOR = 0;
    rep(i,0,n) XOR^=(i+1^a[i]);
    cout<<XOR;
}

// input: 5
// 3 4 2 1

// output: 5