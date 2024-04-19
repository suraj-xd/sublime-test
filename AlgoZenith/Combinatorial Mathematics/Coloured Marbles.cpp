// Description

// You have N marbles, out of which C1 are red, C2 are blue and C3 are green. (C1+C2+C3 = N) You have to tell the number of different arrangements possible. Since the answer can be quite large, print it modulo 109+7.

// Assume that marbles of the same colour are indistinguishable.


#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
 
const int mod = 1e9+7;
int fact[100001];
 
int pw(int a, int b, int p) {
    if(b == 0) return 1;
    int t = pw(a, b/2, p);
    t = (t * t)%p;
    if(b % 2) return (a * t)%p;
    return t;
}
 
signed main() {
    IOS
    fact[0] = 1;
    for (int i = 1; i <= 100000; ++i) {
        fact[i] = (fact[i-1] * i)%mod;
    }
    int t;
    cin >> t;
    while (t--) {
        int n, c1, c2, c3;
        cin >> n >> c1 >> c2 >> c3;
        int ans = fact[n];
        ans = (ans * pw(fact[c1], mod-2, mod))%mod;
        ans = (ans * pw(fact[c2], mod-2, mod))%mod;
        ans = (ans * pw(fact[c3], mod-2, mod))%mod;
        cout << ans <<"\n";
    }
    return 0;
}