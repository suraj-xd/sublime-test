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
int kPairs(vi a,int k){
    unordered_map<int,int> mp;
    for(auto it:a){
        mp[it]++;
    }
    int ans = 0;
    for(auto it:mp){
        int num = it.first;
        if(k==0 && it.second>1){
            ans++;
        }else if(k!=0 &&  mp.find(k+it.first)!=mp.end()){
            ans++;
        }
    }
    return ans;
}
int main(){
    vi a = {3,1,4,1,5};
    int ans  = 0;
    
}