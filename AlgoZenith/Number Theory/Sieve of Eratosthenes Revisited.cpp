// Description

// Find all prime numbers between the range from L to R (endpoints inclusive). Print them in non-decreasing order.


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<bool> segmentedSieve(long long L, long long R) {
    // generate all primes up to sqrt(R)
    long long lim = sqrt(R);
    vector<bool> mark(lim + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (long long j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<bool> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll L, R; cin >> L >> R;
    vector<bool> isPrime = segmentedSieve(L, R);

    set<ll> primes;

    for(int i = 0; i < (int)isPrime.size(); i++) {
        if(isPrime[i]) {
            primes.insert(i + L);
        }
    }

    cout << (int)primes.size() << "\n";
    for(ll u : primes) {
        cout << u << " ";
    }
    cout << "\n";
}