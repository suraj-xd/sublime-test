#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void dfs(vi &arr,int i,int tar,vi atn,vvi &ans){
    if(tar<0){
        return;
    }
    if(tar==0){
        ans.push_back(atn);
        return;
    }

    rep(j,i,arr.size()){
        if(j!=i && arr[j]==arr[j-1]){
            continue;
        }
        atn.push_back(arr[j]);
        dfs(arr,j+1,tar-arr[j],atn,ans);
        atn.pop_back();
    }
}

vvi combinationSum2(vi &arr,int target){
    vvi ans;
    sort(arr.begin(),arr.end());
    dfs(arr,0,target,{},ans);
    return ans;
}
int main(){
    int target = 8;
    vi candidates = {10,1,2,7,6,1,5};
    vvi ans = combinationSum2(candidates,target);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// output:
// 1 1 6 
// 1 2 5 
// 1 7 
// 2 6