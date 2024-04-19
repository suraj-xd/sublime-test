#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define Rep(i,a,b) for(int i=a;i<=b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
const int N = 1e5+2, INF = 1e9+7;
void sortArrays(vi &ar1, vi &ar2, int n,int m){
    for (size_t i = 0; i < n-1; i++)
    {   
        rep(j,0,m){
            if(ar1[i]<ar2[j] && ar1[i+1]>=ar2[j]){
                swap(ar1[i+1],ar2[j]);
            }
        }cout<<endl;
    }// time-complexity O(n*m);

    // sort(ar2.begin(),ar2.end()); // time-complexity- mlogm;
    for(auto it:ar1) cout<<it<<" ";
    cout<<endl;
    for(auto i:ar2) cout<<i<<" ";
}
int main(){
    int n,m; cin>>n>>m;
    vector<int> ar1(n);
    vector<int> ar2(m);
    rep(i,0,n) cin>>ar1[i];
    rep(i,0,m) cin>>ar2[i];
    sortArrays(ar1,ar2,n,m);
}