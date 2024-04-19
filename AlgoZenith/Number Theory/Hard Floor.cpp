// Your task is to find the answer to the following sum.

// for i to n -> sum of [ ( n / i ) ^ m ] % MOD;


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int mod = 1e9 + 7;

inline void add(int &a, int b) {
  a += b;
  if (a >= mod) a -= mod;
}

inline void sub(int &a, int b) {
  a -= b;
  if (a < 0) a += mod;
}

inline int mul(int a, int b) {
  return (int) ((long long) a * b % mod);
}

inline int power(int a, long long b) {
  int res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a);
    }
    a = mul(a, a);
    b >>= 1;
  }
  return res;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n; 
    int m;
    cin >> n >> m;

    int ans = 0;

    for (ll i = 1, la; i <= n; i = la + 1) {
        la = n / (n / i);
        //n / x yields the same value for i <= x <= la.
        ll x = n / i; x %= mod;
        if(x < 0) x += mod;
        int cur = power(x, m);
        int y = 1LL * (la - i + 1) % mod;
        if(y < 0) y += mod;
        cur = mul(cur, y);
        add(ans, cur);
    }

    cout << ans << "\n";
}