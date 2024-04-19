#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// LCS of two vectors but can change k elements into anything
int n,m,k;
vi a,b;
int LCSofK(int i, int j,int k){
    if(i==n || j==m) {
        return 0;
    }

    int c1(0),c2(0),c3(0);
    if(a[i]==b[j]){
        c1 =  1 + LCSofK(i+1,j+1,k);
    }
    if(k>0){
        c2 = 1 + LCSofK(i+1,j+1,k-1);
    }

    c3 = max(LCSofK(i+1,j,k),LCSofK(i,j+1,k));

    return max({c1,c2,c3});
}
int main(){
    cin>>n>>m>>k;
    a = vi(n);
    b = vi(m);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    int ans = LCSofK(0,0,k);
    cout<<ans;
}

// input: 5 5 1
//         1 2 3 4 5
//         5 3 1 4 2

// output: 3 // 1 4 2