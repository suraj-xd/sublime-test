// Description

// You have given M binary strings, S1, S2, ..., SM. Let T = Sp_1 + Sp_2 + ...+Sp_M, where p is a permutation of {1, 2, ..., M}.
// Your task is to find the minimum value of inversion count in T among all M! possible combinations.
// The inversion count is the number of pairs (i, j) in T such that i < j and Ti > Tj.


#include<bits/stdc++.h>
using namespace std;

#define ll long long int

signed main() 
{
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);   
    
    int T; cin >> T;

    while(T--) {
        int m; cin >> m;

        string s[m];
        for(int i = 0; i < m; i++) {
            cin >> s[i];
        }

        ll cnt[m][2];
        memset(cnt, 0LL, sizeof(cnt));

        for(int i = 0; i < m; i++) {
            for(char c : s[i]) {
                if(c == '0') cnt[i][0]++;
                else cnt[i][1]++;
            }
        }

        vector<int> id(m);
        for(int i = 0; i < m; i++) {
            id[i] = i;
        }

        sort(id.begin(), id.end(), [&](int x, int y) {
            return cnt[x][1] * cnt[y][0] < cnt[x][0] * cnt[y][1];
        });

        ll ans = 0;
        ll one = 0;

        for(int i : id) {
            for(char c : s[i]) {
                if(c == '0') {
                    ans += one;
                }
                else {
                    one++;
                }
            }
        }

        cout << ans << "\n";

    }
}