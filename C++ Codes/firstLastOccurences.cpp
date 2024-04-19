#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n; cin>>n;
    vi arr(n);
    for(auto &it:arr) cin>>it;
    bool flag = false;
    int t; cin>>t;
    int x,y;
    rep(i,0,n){
        if(!flag && t == arr[i]){
            x = i;
            flag = true;
        }
        if(flag && t==arr[i]){
            y = i;
        }
    }
    cout<<x<<" "<<y;
}

// input:
// 10
// 1 2 3 2 2 4 6 7 2 3
// 2

// output: 1 8