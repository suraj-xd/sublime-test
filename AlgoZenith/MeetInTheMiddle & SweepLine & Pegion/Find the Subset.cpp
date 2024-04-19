// Description

// You are given a multiset of N integers. Check whether there exists a nonempty subset of it such that the sum of the subset's elements is divisible by N. Otherwise, state that this subset doesn't exist.


#include <bits/stdc++.h>
using namespace std;

#define ll long long int


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << "YES\n";
    }

    return 0;
}