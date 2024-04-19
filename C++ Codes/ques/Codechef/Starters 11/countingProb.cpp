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
    int num = 1e5;
    int n; cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;
    int ans = 0;
    for(auto it:a){
        ans = max(ans,it);
    }
    cout<<(num-ans)+(num-ans+1);
}

// input:
// 4
// 3 9 8 4
// output:
// 199983