#include<bits/stdc++.h>
using namespace std;
#define speedo           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
bool chefAndClosure(vi a){
    if(a.size()==1) return true;
    int n = a.size();
    unordered_set<int> s;
    rep(i,0,n){
        s.insert(a[i]);
    }
    rep(i,0,n-1){
        int curr = a[i];
        int mul= 1;
        rep(j,i+1,n){
            int num = curr*a[j];
            if(s.find(num)==s.end()) return false;
            mul*=num;
        }
        if(s.find(mul)==s.end()) return false;
    }
    return true;
}
int main(){
    int n; cin>>n;
    while(n--){
        int t; cin>>t;
        vi a(t);
        for(auto &i:a) cin>>i;
        cout<<chefAndClosure(a)<<endl;
    }
}
// input:
// 3
// 3
// 1 0 3
// 3
// 1 -1 -1
// 3
// 1 3 3

// 1
// 1
// 0