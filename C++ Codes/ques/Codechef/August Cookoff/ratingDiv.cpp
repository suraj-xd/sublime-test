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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<=1600) cout<<"3"<<endl;
        else if(n>=2000) cout<<"1"<<endl;
        else cout<<"2";
    }
}

// 3
// 1450
// 4000
// 2000

// output:
// 3
// 1
// 1