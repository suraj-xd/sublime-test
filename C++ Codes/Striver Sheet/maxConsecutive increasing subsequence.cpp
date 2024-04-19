#include <bits/stdc++.h>
using namespace std;
// maxConsecutive increasing subsequence
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define enter cout<<endl 
int maxConsecutive(vi &nums){
    int n = nums.size();
    int ans = 1;
    if(n<=1){
        return 0;
    }
    unordered_set<int> s;
    rep(i,0,n) s.insert(nums[i]);
    for(auto &it:nums){
        if(s.find(it-1)!=s.end()){
            continue;
        }
        int num = it;
        int cnt = 1;
        while(s.find(num+1)!=s.end()){
            num = num+1;
            cnt++;
        }
        ans = max(ans,cnt);
    }
    return ans;

}
int main(){
    vi a = {0,3,7,2,5,8,4,6,0,1};
    int n = a.size();
    cout<<maxConsecutive(a);
}