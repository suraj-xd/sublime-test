// Description

// You are given a list of N intervals. The i-th interval is [li, ri), which denotes a range of numbers greater than or equal to li and strictly less than ri. 
// Find the minimum integer x such that you can select x intervals from the given N intervals so that the union of the selected intervals is [0, L).

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int solve(vector<pair<ll,ll>> &v, ll L) {
    map<ll,ll> M;
    for(auto it : v) {
        M[it.first] = max(M[it.first], it.second);
    }

    int ans = 0;
    ll last = 0, maxi = 0;

    for(auto it : M) {
        if(it.first == last) {
            maxi = max(maxi, it.second);
            last = maxi;
            ans++;
        }
        else if(it.first > last) {
            ans++;
            last = maxi;
        }
        maxi = max(maxi, it.second);
    }

    if(last < L) ans++;

    return ans;
}

signed main() 
{
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);   
    
    int n;
    ll L;
    cin >> n >> L;
    
    vector<pair<ll,ll>> v;
    for(int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        v.push_back({l, r});
    }

    cout << solve(v, L) << "\n";
}