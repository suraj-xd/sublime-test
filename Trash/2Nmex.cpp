// You have given a sequence of N integers A1, A2, …, AN. Your task is to find the sum of 
// f(S) over all 2N possible subsequences S of this sequence.
// Since the resulting sum can be very big, compute it modulo 998244353.

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 200010;
const int MOD = 998244353;

int t, n; 
ll two[N], a[N], freq[N], sf[N];

int main() {
  two[0] = 1;
  for (int i = 1; i < N; ++i) two[i] = 2 * two[i - 1] % MOD;
  cin >> t;
  while (t--) {
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
	  scanf("%lld", a + i);
	  ++freq[min(a[i], n + 1LL)];
	}
	sf[n + 69] = 0;
	for (int i = n + 68; i; --i) sf[i] = sf[i + 1] + freq[i];
	ll ans = 0, pf = 1;
	for (ll i = 1; i <= n + 1; ++i) {
	  ans = (ans + i * (pf * two[sf[i + 1]] % MOD)) % MOD;
	  pf = pf * (two[freq[i]] - 1) % MOD;
	}
	ans += MOD, ans %= MOD;
	printf("%lld\n", ans);
	for (int i = 0; i <= n + 69; ++i) freq[i] = 0;
  }
  return 0;
}