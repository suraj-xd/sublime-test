#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
typedef int long long ll;
ll query(ll x){
    cout<<"? "<<x<<endl;
    ll y; cin>>y;
    return y;
}
inline void solve(){    
    ll x1 = 1e18;
    ll y1 = query(x1);
    ll x2 = x1 - y1;
    ll y2 = query(x2-1);
    cout<<y2+1<<endl;
}
int32_t main(){
    speedo
    int t; cin>>t;
    while(t--){
        solve();
    }   
}