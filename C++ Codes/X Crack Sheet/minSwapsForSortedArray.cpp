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
int minSwaps(vi a){
    vector<pair<int,int>> arr;
    rep(i,0,a.size()){
        arr.pb({a[i],i});
    }
    int ans = 0;
    sort(arr.begin(),arr.end());
    vi vis(a.size(),0);
    rep(i,0,a.size()){
        if(vis[i] || i==arr[i].second){
            continue;
        }
        int j = i;
        int cycle = 0;
        while(!vis[j]){
            vis[j] = 1;
            j = arr[j].second;
            cycle++;
        }
        if(cycle>0){
            ans += (cycle-1);
        }
    }
    return ans;
}
int32_t main(){
    speedo
    vi a  = {2, 8, 5, 4};
    cout<<minSwaps(a);
}

// 2
// 2, 8, 5, 4
// 1