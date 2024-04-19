// Description

// You have given two vectors in N-dimension space, let it be V and W.
// V = <V1, V2, ..., VN>
// W = <W1, W2, ..., WN>

// The dot product is defined as V.W = V1 * W1 + V2 * W2 + ... + VN * WN.

// Now you are allowed to permute numbers in vectors, in order to minimize the dot product. Find the minimum dot product that you can get.

// See sample test cases for more explanation.

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while(T--) {
        int n; cin >> n;

        int v[n], w[n];

        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < n; i++) cin >> w[i];

        sort(v, v + n);
        sort(w, w + n);

        ll ans = 0;

        for(int i = 0, j = n - 1; i < n; i++, j--)
            ans += 1LL * v[i] * w[j];

        cout << ans << "\n";
    }
    return 0;
}