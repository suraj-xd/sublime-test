#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vvi subsets(vi &nums){
    vvi ans;
    int n = nums.size();
    int p = (1<<n);
    rep(i,0,p){
        vi arr;
        rep(j,0,n){
            if(i & (1<<j)){ //  ((i >> j) & 1)
                arr.push_back(nums[j]);
            }
        }
        ans.push_back(arr);   
    }
    return ans;
}
int main(){
    vi a  = {1,2,3};
    vvi ans = subsets(a);
    for(auto it: ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}
// output:
// 1 
// 2 
// 1 2 
// 3 
// 1 3 
// 2 3 
// 1 2 3