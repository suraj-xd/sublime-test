#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// using mod property

// recursive
const int N = 1e5+2, MOD = 1e9+7;
int powerRecursive(int a,int n){
    if(n==0) return 1;
    int p = powerRecursive(a,n/2)%MOD;

    if(n&1){
        return (((p*p%MOD)*a)%MOD);
    }else{
        return (p*p)%MOD;
    }
}
// iterative
int powerIterative(int a, int n){
    
    a%=MOD;
    cout<<a<<endl;
    int ans = 1;
    while(n>0){
        if(n&1){
            ans = (ans*a)%MOD;
        }
        a = (a*a)%MOD;
        n = n>>1;
    }
    return ans;
}
int main(){
    int a,n;
    cin>>a>>n;
    a%=MOD;
    int ans = powerRecursive(a,n);
    cout<<ans;
}

// input: 193434343 2
// output: 502156401