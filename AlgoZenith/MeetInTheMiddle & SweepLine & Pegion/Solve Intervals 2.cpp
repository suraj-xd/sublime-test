// Description

// You are given a list of N intervals. The i-th interval is [li, ri), which denotes a range of numbers greater than or equal to li and strictly less than ri. 
// Find The minimum integer y such that for all possible combinations of y intervals from the given N interval, it does cover [0, L).

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int solve(vector<pair<ll,ll>> &v) {
    int ans = 0;
    vector<ll> left, right;
    vector<ll> all;

    for(auto it : v) {
        left.push_back(it.first);
        right.push_back(it.second);
        all.push_back(it.first);
        all.push_back(it.second);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    for(ll u : all) {
        int L = 0, R = (int)right.size() - 1;
        int x = -1;
        while(L <= R) {
            int mid = (L + R) / 2;
            if(right[mid] < u) {
                x = mid;
                L = mid + 1;
            }
            else R = mid - 1;
        }
        x++;

        L = 0; R = (int)left.size() - 1;
        int y = (int)left.size();
        while(L <= R) {
            int mid = (L + R) / 2;
            if(left[mid] > u) {
                y = mid;
                R = mid - 1;
            }
            else L = mid + 1;
        }
        y = (int)left.size() - y;

        ans = max(ans, x + y);
    }

    return ans + 1;
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

    cout << solve(v) << "\n";
}