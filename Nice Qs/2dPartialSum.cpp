#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m, q;
    cin >> n >> m >> q;
    ll arr[n + 1][m + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < q; i++)
    {
        ll x1, y1, x2, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        arr[x1][y1] += c;
        if (x2 < n and y2 < m)
            arr[x2 + 1][y2 + 1] += c;
        if (y2 < m)
            arr[x1][y2 + 1] -= c;
        if (x2 < n)
            arr[x2 + 1][y1] -= c;
    }

    for (int i = 1; i <= n; i++)
    { // row wise prefix sum
        for (int j = 2; j <= m; j++)
            arr[i][j] += arr[i][j - 1];
    }
    for (int i = 1; i <= m; i++) // column wise prefix sum
        for (int j = 2; j <= n; j++)
            arr[j][i] += arr[j - 1][i];
    ll ans = -1e18; // minimum value possible is -Q*1e9 = -1e16
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] > ans)
                ans = arr[i][j], cnt = 1;
            else if (arr[i][j] == ans)
                cnt++;
        }
    }
    cout << ans << " " << cnt << "\n";
}

// General Idea

ll n, m, q;
cin >> n >> m >> q;
ll arr[n + 1][m + 1];
memset(arr, 0, sizeof(arr));
while (q--)
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x;
    cin >> x;
    arr[x1][y1] + x;
    arr[x2+1][y2+1] += x;
    arr[x1 - 1][y2] -= x;
    arr[x2][y1 - 1] -= x;
}