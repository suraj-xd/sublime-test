#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// using hashing
vi twoSum(vi &nums, int target){
    int n = nums.size();
    unordered_map<int,int> mp;
    rep(i,0,n){
        int tar = target - nums[i];
        if(mp.find(tar)!=mp.end()){
            return {mp[tar],i};
        }else{
            mp[nums[i]] = i;
        }
    }
    return {-1,-1};
}
int main(){
    vi nums = {1,2,4,6,7};
    vi ans = twoSum(nums,10);
    for(auto it:ans)
        cout<<it<<" ";
}