#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
void prefixPrime(){
	vector<int> isPrime(100,1);
	rep(i,2,100){
		if(isPrime[i]){
			for(int j=i*i;j<100;j+=i) isPrime[j] = 0;
		}
	}
	vector<int> ans(100);
	rep(i,2,100){
		ans[i] = ans[i-1] + isPrime[i];
	}
	for(auto it:ans) cout<<it<<" ";
}
int32_t main(){
    int n; cin>>n;
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    rep(i,2,n){
        if(prime[i]){
            for(int j=i*i;j<n;j+=i){
                prime[j] = false;
            }
        }
    }
    rep(i,0,n){
        if(prime[i]) cout<<i<<" ";
    }
}

// const int N = 1000;
//     int lp[N+1];
//     vector<int> pr;

//     for (int i=2; i<=N; ++i) {
//         if (lp[i] == 0) {
//             lp[i] = i;
//             pr.push_back (i);
//         }
//         for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
//             lp[i * pr[j]] = pr[j];
//     }
//     for(auto it:pr) cout<<it<<" ";


// int n;
// vector<bool> is_prime(n+1, true);
// is_prime[0] = is_prime[1] = false;
// for (int i = 2; i <= n; i++) {
//     if (is_prime[i] && (long long)i * i <= n) {
//         for (int j = i * i; j <= n; j += i)
//             is_prime[j] = false;
//     }
// }

// vector<char> segmentedSieve(long long L, long long R) {
//     // generate all primes up to sqrt(R)
//     long long lim = sqrt(R);
//     vector<char> mark(lim + 1, false);
//     vector<long long> primes;
//     for (long long i = 2; i <= lim; ++i) {
//         if (!mark[i]) {
//             primes.emplace_back(i);
//             for (long long j = i * i; j <= lim; j += i)
//                 mark[j] = true;
//         }
//     }

//     vector<char> isPrime(R - L + 1, true);
//     for (long long i : primes)
//         for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
//             isPrime[j - L] = false;
//     if (L == 1)
//         isPrime[0] = false;
//     return isPrime;
// }