#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vi bit;
int getSum(int i){
    int ans = 0;
    while(i > 0){
        ans += bit[i];
        i-= (i & (-i));
    }
    return ans;
}
void update(int n, int i, int inc){
    while(i<=n){
        bit[i]+= inc;
        i+=( i & (-i));
    }
} 
int main(){
    int n; cin>>n;
    vi a(n);
    for(auto &it:a) cin>>it;
    vi temp = a;
    sort(temp.begin(),temp.end());
    rep(i,0,n){
        a[i] = lower_bound(temp.begin(),temp.end(),a[i]) - temp.begin()+1;
    }
    bit = vi(n+1);

    int inv  = 0;
    for(int i=n-1;i>=0;i--){
        inv += getSum(a[i]-1);
        update(n,a[i],1);
    }

    cout<<inv<<endl;
}

// input:
// 8
// 3 5 6 9 1 2 6 7

// output: 10