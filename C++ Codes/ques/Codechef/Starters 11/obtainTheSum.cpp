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
        int n,s; 
        cin>>n>>s;
        if(s>=n){
            cout<<(2*n)-s<<endl;      
        }else{
            cout<<s<<endl;
        }
    }
}
// 3
// 3 1
// 4 4
// 2 3

// 1
// 4
// 1