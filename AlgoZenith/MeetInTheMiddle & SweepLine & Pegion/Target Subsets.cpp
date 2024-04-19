// Description

// You have given an array of length N, and a number X. Find the number of subsets with the sum of elements less than equal to X.

// Note:

// The sum of elements in an empty subset is 0.
// The set may contain duplicates elements.

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

signed main() 
{
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);   
    
    int T; cin >> T;
    while(T--) {
        int n, x; 
        cin >> n >> x;
        
        vector<int> aL, aR;
        for(int i = 0; i < n / 2; i++) {
            int x; cin >> x;
            aL.push_back(x);
        }
        for(int i = n / 2; i < n; i++) {
            int x; cin >> x;
            aR.push_back(x);
        }

        vector<int> left, right;

        int m = (int)aL.size();
        for(int i = 0; i < (1 << m); i++) {
            int sum = 0;
            for(int j = 0; j < m; j++) {
                if((i >> j) & 1) {
                    sum += aL[j];
                }
            }
            left.push_back(sum);
        }
        
        m = (int)aR.size();
        for(int i = 0; i < (1 << m); i++) {
            int sum = 0;
            for(int j = 0; j < m; j++) {
                if((i >> j) & 1) {
                    sum += aR[j];
                }
            }
            right.push_back(sum);
        }

        sort(left.begin(), left.end());
        sort(right.begin(), right.end());

        ll ans = 0;

        int ptr = (int)right.size() - 1;
        for(int u : left) {
            if(u > x) break;
            while(ptr >= 0 && right[ptr] + u > x) {
                ptr--;
            }
            ans += ptr + 1;
        }

        cout << ans << "\n";
    }
}