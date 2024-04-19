// Description

// There are N monsters in front of you. To defeat the i-th of them you need an army of Ai soldiers, Bi of which will be killed during the battle.
// Now you want to know the minimal number of soldiers you need to recruit in order to kill all the monsters.
// You don't care about the order of battles: the only thing that matters is that none of the monsters will be left alive.


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
        int n;
        cin >> n;
        pair<int,int> monster[n];
        for(int i = 0; i < n; i++) {
            cin >> monster[i].first >> monster[i].second;
        }

        sort(monster, monster + n, [&](pair<int,int> &a, pair<int,int> &b) {
            return a.first - a.second > b.first - b.second;
        });

        ll ans = 0, cur = 0;

        for(int i = 0; i < n; i++) {
            ans += max(0LL, monster[i].first - cur);
            cur = max(1LL * monster[i].first, cur);
            cur -= monster[i].second;
        }

        cout << ans << "\n";
    }

    return 0;
}