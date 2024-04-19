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
    string dirs[4];
    dirs[0] = "South";
    dirs[1] = "East";
    dirs[2] = "North";
    dirs[3] = "West";
    int t; cin>>t;
    for(;t;t--){
        int n; cin>>n;
        n%=4;
        cout<<dirs[n]<<endl;
    }
}

// 3
// 1
// 3
// 6

// East
// West
// North