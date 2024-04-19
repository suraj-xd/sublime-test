#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int32_t main(){
    int n; cin>>n;
    vvi a(n,vi(n,-1));
    if(n%2!=0){
        rep(i,0,n){
            rep(j,0,n){
                if(i==j) a[i][j] = 1;
            }
        }
    }
    for(auto it:a){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}
// 2
// -1 -1 
// -1 -1

// 3
// 1 -1 -1 
// -1 1 -1 
// -1 -1 1

// 5
// 1 -1 -1 -1 -1 
// -1 1 -1 -1 -1 
// -1 -1 1 -1 -1 
// -1 -1 -1 1 -1 
// -1 -1 -1 -1 1