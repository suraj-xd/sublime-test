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
int removeCoveredIntervals(vvi a){
    int n = a.size();
    int ans = 0;
    rep(i,0,n){
        bool inside = false;
        rep(j,0,n){
            if(i!=j && a[j][0]<=a[i][0] && a[j][1]>=a[i][0]) inside = true;
        }
        if(!inside) ans++;
    }
}
int32_t main(){
    speedo
    
}