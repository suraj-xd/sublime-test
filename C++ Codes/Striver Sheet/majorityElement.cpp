#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vi majorityElement(vi &nums){
    vi elem(2,-100000001);
    vi count(2,0);
    int n = nums.size();
    for(auto &i: nums){
        if(elem[0]==i) count[0]++;
        else if(elem[1]==i){
            count[1]++;
        }
        else if(count[0]==0){
            elem[0] = i; count[0]++;
        }
        else if(count[1]==0){
            elem[1] = i; count[1]++;
        }
        else count[0]--; count[1]--;
    }

    count[0] = 0;
    count[1] = 0;
    for(auto &i:nums){
        if(i==elem[0]) count[0]++;
        if(i==elem[1]) count[1]++;
    }
    vector<int> ans;
    if(count[0]>n/3) ans.push_back(elem[0]);
    if(count[1]>n/3) ans.push_back(elem[1]);
    return ans;
}
int main(){
    int n; cin>>n;
    vi nums(n);
    rep(i,0,n) cin>>nums[i];
    vi ans = majorityElement(nums);
    for(auto it: ans) cout<<it<<" ";
}