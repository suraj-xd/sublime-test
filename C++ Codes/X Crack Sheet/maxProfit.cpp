#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int maxProfit(vi a,int n){
    if(n<=1) return -1;
    int ans = 0;
    int min_prices = a[0];
    rep(i,1,n){
        if(a[i]-min_prices>0){
            ans = max(ans,a[i]-min_prices);
        }
        min_prices = min(min_prices,a[i]);
    }
    return ans;
}
int main(){
    vi prices = {7,1,5,3,6,4};
    cout<<maxProfit(prices,prices.size());
}
// output: 5 // 6-1: 5