#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int32_t main(){
    speedo
    int t; cin>>t;
    for(;t;t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==1 || b+c==1 || a+c==1) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }   
}