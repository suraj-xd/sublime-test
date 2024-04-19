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
    vi a;
    int i = 0;
    while(a.size()!=1000){
        i++;
        if(i%3==0 || i%10==3) continue;
        a.push_back(i);
    }
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<a[n-1]<<endl;
    }
}
// input:
// 10
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 1000

// output:
// 1
// 2
// 4
// 5
// 7
// 8
// 10
// 11
// 14
// 1666