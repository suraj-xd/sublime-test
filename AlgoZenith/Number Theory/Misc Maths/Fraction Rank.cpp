// Description

// Let us consider a set of fractions x / y, such that 0 ≤ x / y ≤ 1, y ≤ n and gcd (x, y) = 1.

// For example, say n = 5. Then we have the following set in increasing order : 0/1, 1/5, 1/4, 1/3, 2/5, 1/2, 3/5, 2/3, 3/4, 4/5, 1/1

// You are given n, a and b. The task is to find the rank of a / b in a set of fractions as stated above which is in increasing order.

// Note: Fractions should be finite.

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

ll get_fractions_less_than_eq(ll n, ll a, ll b){
    ll ans = 0,arr[n + 1];

    for(ll i = 1; i <= n; i++)
        arr[i] = (a * i) / b;

    for(ll i = 1; i <= n; i++){
        for(ll j = i * 2; j <= n;j += i)
            arr[j] -= arr[i];
        ans += arr[i];
    }
    return ans;
}

signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while(T--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << get_fractions_less_than_eq(n, a, b) + 1 << "\n";
    }
    return 0;
}