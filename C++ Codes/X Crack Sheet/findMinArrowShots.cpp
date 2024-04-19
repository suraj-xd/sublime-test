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
bool comp(vi &a,vi &b){
    if(a[1]==b[1]) return a[0] < b[0];
    return a[1] < b[1];
}
int findMinArrowShots(vvi a){
    int n = a.size();
    if(n==0) return 0;
    int ans = 1;
    sort(a.begin(),a.end(),comp);
    int end = a[0][1];
    rep(i,1,n){
        if(a[i][0] > end){
            ans++;
            end = a[i][1];
        }
    }
    return ans;
}
int32_t main(){
    speedo
    vvi a = {{10,16},{2,8},{1,6},{7,12}} ;
    int ans = findMinArrowShots(a);
    cout<<ans;
}