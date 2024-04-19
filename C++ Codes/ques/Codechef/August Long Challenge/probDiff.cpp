#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int t; cin>>t;
    while(t--){
        vi a(4);
        rep(i,0,4) cin>>a[i];
        int cnt = 0;
        if(a[0]!=a[1] && a[0]!=a[2]) cnt++;
        if(a[1]!=a[2]&& a[1]!=a[3]) cnt++;
        cout<<cnt<<endl;
    }
}
// input:3
// 1 4 3 2
// 4 5 5 5
// 2 2 2 2

// output: 2
//         1
//         0