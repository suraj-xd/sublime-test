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
        int A[n + 2];
        for(int i = 1; i <= n; i++)
            cin >> A[i];
        A[0] = -inf;
        A[n + 1] = -inf;

        int prev[n + 2], nxt[n + 2];

        stack<int> s;
        s.push(0);
        for(int i = 1; i <= n; i++) {
            while(!s.empty() && A[s.top()] >= A[i])
                s.pop();
            assert(!s.empty());
            prev[i] = s.top();
            s.push(i);
        }

        while(!s.empty()) s.pop();

        s.push(n + 1);
        for(int i = n; i >= 1; i--) {
            while(!s.empty() && A[s.top()] >= A[i])
                s.pop();
            assert(!s.empty());
            nxt[i] = s.top();
            s.push(i);
        }

        ll ans = 0;

        for(int i = 1; i <= n; i++){
            ans += 1LL * A[i] * (i - prev[i]) * (nxt[i] - i);
            cerr<< (i - prev[i]) * (nxt[i] - i)<< ' ';
        }cerr<<endl;

        cout << ans << "\n";
    }
    return 0;
}