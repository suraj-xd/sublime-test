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
        dfs(arr,j,tar-arr[j],atn,ans);
        atn.pop_back();
    }
}

vvi combinationSum(vi &arr,int target){
    vvi ans;
    sort(arr.begin(),arr.end());
    dfs(arr,0,target,{},ans);
    return ans;
}
int main(){
    int target = 7;
    vi a = {2,3,6,7};
    vvi ans = combinationSum(a,target);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// output:
// 2 2 3 
// 7