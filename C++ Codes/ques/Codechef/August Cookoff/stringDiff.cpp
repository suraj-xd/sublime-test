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
    speedo
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s, res;
        rep(i,0,n){
            cin>>s;
            if(s[i]=='1') res.push_back('0');
            else res.push_back('1');
        }
        cout<<res<<endl;
    }   
}
// 2
// 3
// 101
// 100
// 110
// 2
// 10
// 11

// 011
// 00