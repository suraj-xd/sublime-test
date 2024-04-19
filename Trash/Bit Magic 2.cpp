// To solve this problem, we need to implement the six required queries on the given integer n. The queries are as follows:

// Binary representation of n: To find the binary representation of n, we can use bitwise operators to extract each bit of the number from right to left and print it out.
// Most significant bit (MSB): To find the position of the most significant bit (MSB) or the leftmost set bit of n, we can use the built-in function __lg() in C++, which returns the position of the most significant set bit in the binary representation of a positive integer. If n is 
// 0
// , we return -
// 1
// .
// Rightmost set bit (RSB): To find the position of the rightmost set bit of n, we can use another built-in function __builtin_ctzll(), which returns the position of the rightmost set bit in the binary representation of a positive integer. If n is 
// 0
// , we return -
// 1
// .
// Power of 
// 2
// : To check if n is a power of 
// 2
// , we can use the built-in function __builtin_popcountll(), which returns the number of set bits in the binary representation of a positive integer. If n has only one set bit, then it is a power of 
// 2
//  and we return 
// 1
// . Otherwise, we return 
// 0
// .
// Biggest power of 
// 2
//  divisor: To find the biggest power of 
// 2
//  that is a divisor of n, we can use the built-in function __builtin_ctzll() again, which returns the position of the rightmost set bit in the binary representation of n. The answer is then 
// 2
//  to the power of this position. If n is 
// 0
// , we return -
// 1
// .
// Smallest power of 
// 2
//  greater than or equal to n: To find the smallest power of 
// 2
//  that is not smaller than n, we can use the built-in function __builtin_clzll(), which returns the number of leading zeros in the binary representation of n minus 
// 1
// . The answer is then 
// 2
//  to the power of 
// 64
//  minus this value. If n is less than or equal to 
// 1
// , we return 
// 2
// .


#include <bits/stdc++.h>
using namespace std;

#define ll int64_t
#define endl '\n'

void binary(ll x) {
    for (int i = 63; i >= 0; i--) {
        if (x & (1LL << i))cout << 1;
        else cout << 0;
    }
    cout << endl;
}
int msb(ll x) {
    if (x == 0)return -1;
    if (x < 0)return 63; // negative numbers case.
    return (int)__lg(x);
}
int rsb(ll x) {
    if (x == 0)return -1;
    return msb(x ^ (x - 1));
}
bool pow2(ll &x) {
    if (x <= 1)return false;
    return (__builtin_popcountll(x) == 1);
}
ll pow2_div(ll x) {
    if (x == 0)return -1;
    return (1LL << __builtin_ctzll(x)); // 2^(trailing zeroes in bits).
}
ll pow2_n(ll x) {
    if (x <= 1)return 2;
    return (1LL << (64 - __builtin_clzll(x - 1))); // 2^(64 - leading zeroes in bits).
}
void solve() {
    ll n;
    cin >> n;
    binary(n);
    assert(n == 0 || msb(n) == 63 - __builtin_clzll(n));
    cout << msb(n) << endl;
    assert(n == 0 || rsb(n) == __builtin_ctzll(n));
    cout << rsb(n) << endl;
    cout << pow2(n) << endl;
    cout << pow2_div(n) << endl;
    cout << pow2_n(n) << endl;
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    // int i = 1;
    cin >> t;
    while (t--) {
        // cout << "Case #" << i << ": ";
        solve();
        // i++;
    }
    return 0;
}