#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int trappingRainwater(vi &h){
    int n = h.size();
    int i = 0, j = n-1;
    int left = h[i], right = h[j];
    int ans = 0;
    while(i <= j){
        left = max(left,h[i]);
        right = max(right,h[j]);

        if(min(left,right)>= h[i]){
            ans+= min(left,right) - h[i];
        }
        if(min(left,right) >= h[j]){
            ans+= min(left,right) - h[j];
        }

        if(h[i]<h[j]){
            i++;
        }else{
            j--;
        }
    }
    return ans;
}
int main(){
    vi a = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trappingRainwater(a);
    cout<<ans;
    // output: 6
}