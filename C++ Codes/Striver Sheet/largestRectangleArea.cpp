#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int greatestRectange(vi &a){
    int n = a.size(),ans(0);
    vi left(n,0),right(n,0);
    left[0] = -1;
    right[n-1] = n;
    for(int i=1;i<n;i++) { 
        int pos = i-1;
        while( pos>0 && a[pos]>=a[i]){
            pos = left[pos];
        }
        left[i] = pos;
    } 
    for(int i=n-2;i>=0;i--){
        int pos = i+1;
        while( pos<n && a[pos]>=a[i]){
            pos = right[pos];
        }
        right[i] = pos;
    }

    rep(i,0,n){
        ans = max(ans,(a[i]*(right[i]-left[i]-1)));
    }
    return ans;
}
int main(){
    vector <int> a = {2,1,5,6,2,3};
    cout<<greatestRectange(a);
}