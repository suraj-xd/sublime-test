#include <bits/stdc++.h>
using namespace std;
// const ll maxn = 105;
 
 
// ll fac[maxn],invfact[maxn];
 
// ll power(ll x, ll y) 
// { 
//     ll res = 1; 
//     x = x % MOD1; 
  
//     while (y > 0) { 
//         if (y & 1) 
//             res = (res * x) % MOD1; 
//         y = y >> 1; 
//         x = (x * x) % MOD1; 
//     } 
 
//     return res; 
// } 
 
// ll MOD1Inverse(ll n) 
// { 
//     return power(n, MOD1 - 2); 
// } 
  
// void comp() // preprocess this function
// {
//     fac[0] = 1, invfact[0] = 1; 
    
//     for (ll i = 1; i < maxn; i++){ 
//         fac[i] = (fac[i - 1] * i) % MOD1;
//         invfact[i] = MOD1Inverse(fac[i]);
//     } 
// }
 
// ll NCR(ll n, ll r, ll p=MOD1) 
// {
//     if(r < 0 || n < 0)
//         assert(false);
 
//     if( n < r ) return 0;
 
//     if (r == 0 || r == n) 
//         return 1; 
    
//     return ( fac[n] * invfact[r]  % MOD1) * invfact[n - r] % MOD1;  
// }
// void solve(){
//   ll n; cin >> n;
//   vvll binom(n+1,vll(n+1,0));
//   for(int j = 0;j <= n;j++){
//     binom[j][0] = 1;
//     for(int k = 1;k < j;k++){
//       binom[j][k] = (binom[j-1][k-1] + binom[j-1][k]) % MOD1;
//     }
//     binom[j][j] = 1;
//   }
// }


// AlgoZenith NCR

#define ll long long int

const int N = 500010;

int mod = 1e9 + 7;

int power(int a, int b, int M) {
    if(!b) return 1;
    int temp = power(a, b / 2, M);
    temp = 1LL * temp * temp % M;
    if(b % 2) temp = 1LL * temp * a % M;
    return temp;
}

int fact[N];

void pre() {
    fact[0] = 1;
    for(int i = 1; i < N; i++) {
        fact[i] = 1LL * fact[i - 1] * i % mod;
    }
}

int ncr(int n, int r) {
    if(n < r) return 0;
    assert(n >= 0 && n < N && r >= 0 && r < N);
    int ans = fact[n];
    ans = 1LL * ans * power(fact[n - r], mod - 2, mod) % mod;
    ans = 1LL * ans * power(fact[r], mod - 2, mod) % mod;
    if(ans < 0) ans += mod;
    assert(ans >= 0 && ans < mod);
    return ans;
}

int main(){

    

}