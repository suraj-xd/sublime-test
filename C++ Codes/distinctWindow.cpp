#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vi distinctWindow(vi &a,int b){
    if(b>a.size()) {
        return {};
    }
    unordered_map<int,int> freq;
    unordered_set<int> dist;
    vi ans;
    int i = 0;
    while(i<b){
        freq[a[i]]++;
        dist.insert(a[i]);
        i++;
    }
    ans.push_back(dist.size());
    int j = 0;
    while(i < a.size()){
        freq[a[j]]--;
        if(freq[a[j]]==0){
            dist.erase(a[j]);
        }
        freq[a[i]]++;
        dist.insert(a[i]);
        ans.push_back(dist.size());
        i++;
        j++;
    }
    return ans;
}
int main(){
    vi a;
    a = {1, 2, 1, 3, 4, 3};
    vi ans = distinctWindow(a,3);
    for(auto it:ans) cout<<it<<" ";
}