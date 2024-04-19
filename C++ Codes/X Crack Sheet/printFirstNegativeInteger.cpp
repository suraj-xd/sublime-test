#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vi negativeElements(vi &arr,int k){
    int n = arr.size();
    vi ans;
    queue<int> q;
    rep(i,0,k){
        if(arr[i]<0){
            q.push(i);
        }
    }
    if(q.size()){
        ans.push_back(arr[q.front()]);
    }else{
        ans.push_back(0);
    }
    rep(i,k,n){
        while(q.size() && q.front()<=i-k){
            q.pop();
        }
        if(arr[i]<0){
            q.push(i);
        }
        if(q.size()){
            ans.push_back(arr[q.front()]);
        }else{
            ans.push_back(0);
        }
    }
    return ans;
}
int main(){
    vi a = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 2;
    vi ans = negativeElements(a,k);
    for(auto ti:ans) cout<<ti<<" ";
}
// -1 -1 -7 -15 -15 0 0