// For a given n, find the number of even and odd numbers among the set, { nC0, nC1,... nCn }.



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) {
		ll n; cin >> n;
		ll ans = 1;
		for(ll i = 0; i < 64; i++) {
			if((n >> i) & 1) {
				ans *= 2;
			}
		}
		cout << n + 1 - ans << " " << ans << "\n";
	}
}