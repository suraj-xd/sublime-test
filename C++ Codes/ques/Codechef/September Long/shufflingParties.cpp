#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int maxXOR(vi a){
    int ans  = 0;
    rep(i,1,a.size()+1){
        ans+= ((a[i-1]+i) % 2);
    }
    return ans;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi a(n);
        for(auto &i:a) cin>>i;
        int maxans = 0;
        sort(a.begin(), a.end());
        do{
            maxans= max(maxans,maxXOR(a));
        }while(next_permutation(a.begin(),a.end()));
        cout<<maxans<<endl;
    }
}
// input:
// 3
// 3
// 1 2 3
// 3
// 2 4 5
// 2
// 2 4

// output:
// 2
// 3
// 1