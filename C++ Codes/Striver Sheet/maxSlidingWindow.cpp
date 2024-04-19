#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vi maxSlidingWindow(vi &nums,int  k){
    list<pair<int,int>> window;
    int n = nums.size();
    vi ans;
    rep(i,0,n){
        int curr = nums[i];
        while(window.size() && window.front().second<i-k){
            window.pop_front();
        }
        while(window.size() && window.back().first < curr){
            window.pop_back();
        }
        window.push_back({curr,i});
        if(i > k-i){
            ans.push_back(window.front().first);
        }
    }
    return ans;
}
int main(){
    vi a = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vi ans = maxSlidingWindow(a,k);
    for(auto t:ans) cout<<t<<" ";
}

// output: 3 3 5 5 6 7 