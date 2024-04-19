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
        string s1,s2;
        cin>>s1>>s2;
        string ans;
        rep(i,0,n){
            int num = ((s1[i]-'0')&(s2[i]-'0'));
            ans.push_back(num+'0');
        }
        cout<<ans<<endl;
    }
}
// 2
// 3
// 101
// 011
// 5
// 10101
// 10011

// output:
// 001
// 10001