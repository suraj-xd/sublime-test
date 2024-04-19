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
string removeConsecutiveCharacter(string s){
    string ans;
    char prev = '\0';
    for(auto i:s){
        if(prev==i) continue;
        ans+=i;
        prev = i;
    }
    return ans;
}
int32_t main(){
    speedo
    int t; cin>>t;
    for(;t;t--){
        string s;
        cin>>s;
        cout<<removeConsecutiveCharacter(s)<<endl;
    }
}