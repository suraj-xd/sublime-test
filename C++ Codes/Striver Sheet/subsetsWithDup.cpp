#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void dfs(vi &nums,int i,vi atn,vvi &ans){
    ans.push_back(atn);
    rep(j,i,nums.size()){
        if(j!=i && nums[j]==nums[j-1]){
            continue;
        }
        atn.push_back(nums[j]);
        dfs(nums,j+1,atn,ans);
        atn.pop_back();
    }
}
vvi subsetsWithDup(vi &a){
    vvi ans;
    sort(a.begin(),a.end());
    dfs(a,0,{},ans);
    return ans;
}
int main(){
    vi a = {1,2,2};
    vvi ans = subsetsWithDup(a);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// output:
// 1 
// 1 2 
// 1 2 2 
// 2 
// 2 2