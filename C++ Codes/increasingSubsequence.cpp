#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n) cin>>a[i];
    int maxlen = 0;
    rep(i,0,n){
        int cnt = 1;
        int maxi = a[i];
        rep(j,i+1,n){
            if(a[j]>maxi){
                cnt++;
                maxi = a[j];
            }
        }
        maxlen = max(maxlen,cnt); 
    }


    cout<<maxlen<<endl;
}
// 1 4 5
// 4 5

// input: 7
// 10 22 3 23 56 3 22
// output: 4