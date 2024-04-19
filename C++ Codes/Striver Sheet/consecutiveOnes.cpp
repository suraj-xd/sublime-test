#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// consecutive ones
int main(){
    int n; cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;
    int ans = 0;
    int curr = 0;
    rep(i,0,n){
        ans = max(ans,curr);
        if(a[i]==1){
            curr++;
        }else{
            curr=0;
        }
    }
    cout<<ans;
}

// input: 5
// 1 0 1 1 0
// 7
// 1 1 0 1 1 1 0

// output: 2 3