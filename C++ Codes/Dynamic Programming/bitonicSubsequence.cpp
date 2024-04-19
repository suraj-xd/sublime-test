#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// Bitonic Subsequence- Strictly Increasing || Strictly Decreasing
//   or  (strictly increasing && Strictly decreasing) 
int main(){
    int n;
    cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;

    vi Forward(n+1,1),Backward(n+1,1);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                Forward[i] = max(Forward[i],Forward[j]+1);
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=i;j--){
            if(a[i] > a[j]){
                Backward[i] = max(Backward[i],Backward[j]+1);
            }
        }
    }
    int ans(0);
    rep(i,0,n){
        ans = max(ans,Forward[i] + Backward[i] - 1);
    }

    cout<<ans;
}

// input: 8
        //1 11 2 10 4 5 2 1
// output: 6 // 1 2 4 5 2 1