#include <bits/stdc++.h>
using namespace std;
// using wilson theorem (a^p-2 == a^-1 (mod p))
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long
int power(int x,int y,int p){
    int ans = 1;
    x%=p;
    while(y > 0){
        if(y&1){
            ans = (ans*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return ans;
}
int modInverse(int a,int p){
    return power(a,p-2,p);
}
int modFactorial(int n,int p){
    if(n>p) return 0;

    int res = (p-1);
    for(int i=n+1;i<p;i++){
        res = (res * modInverse(i,p))%p;
    }
    return res;
}
int32_t main(){
    int n,p;
    cin>>n>>p;
    int ans = modFactorial(n,p);
    cout<<ans;
}

// input:  25 30
// output: 24