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
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int n = abs(a-b);
        int cir = n+n;
        if(c<cir && n>=2){
            if(a<b){
                cout<<c-n<<endl;
            }else{
                cout<<c+n<<endl;
            }
        }else{
            cout<<"-1"<<endl;
        }
    }
}
// 7
// 6 2 4
// 2 3 1
// 2 4 10
// 5 3 4
// 1 3 2
// 2 5 4
// 4 3 2

// 8
// -1
// -1
// -1
// 0
// 1
// -1
