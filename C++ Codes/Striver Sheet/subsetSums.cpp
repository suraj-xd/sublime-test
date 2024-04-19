#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void dfs(vi &a,int i, vi &ans,int atn){
    if(i==a.size()){
        ans.push_back(atn);
        return;
    }

    dfs(a,i+1,ans,atn);
    dfs(a,i+1,ans,atn+a[i]);
}

vi subsetSums(vi a,int N){
    vi ans;
    dfs(a,0,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vi a = {5, 2, 1};
    int N = a.size();
    vi ans = subsetSums(a,N);
    for(auto it:ans)cout<<it<<" ";
}

// N = 3
// Arr = [5, 2, 1]
// Output:
// 0 1 2 3 5 6 7 8