#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int inf = 1e9+2;
int main(){
    int n; cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;
    vi jumps(n,inf);
    if(a[0]==0) {
        cout<<inf<<endl; 
        return 0;
    }
    jumps[0] = 0;
    rep(i,1,n){
        rep(j,0,i){
            if(i<=(j+a[j])){
                jumps[i] = min(jumps[i],jumps[j]+1);
            }
        }
    }
    cout<<jumps[n-1]<<endl;

}


// input: 11
// 1 3 5 8 9 2 6 7 6 8 9

// output: 3