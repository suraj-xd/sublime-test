#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
using lli = long long int;

//  Module Arithematic -> NCR -> Power 
int fact[100100];
lli binpow(lli x,lli p){if(p==0)return 1;if(p%2==1) return x*binpow(x,p-1)%MOD;else{lli temp = binpow(x,p/2);return temp*temp%MOD;}}
lli inv(lli x){return binpow(x,MOD-2);}
void precompute(){fact[0]=1;for(int i=1;i<100100;i++){fact[i] = (fact[i-1]*i)%MOD;}}
lli ncr_fast(lli n,lli r){lli ans = fact[n]; ans = ans * inv(fact[n-r]) % MOD; ans = ans * inv(fact[r]) % MOD;return ans;}
 
//  int main()
//  { 
//      precompute();
//      // t,n,r <= 10^5
//      int t;
//      cin>>t;
//      while(t--){
//          int n,r;
//          cin>>n>>r;
//          cout<<ncr(n,r)<<endl;
//      }
     
//  }

  
//  lli ncr(lli n,lli r){ // O(N + log(MOD))
//      lli ans = factorial(n);
//      ans = ans * inv(factorial(n-r)) % MOD;
//      ans = ans * inv(factorial(r)) % MOD;
//      return ans;
//  }

//  lli factorial(lli x){  // O(N)
//      lli ans = 1;
//      for(lli i=1;i<=x;i++){
//          ans = (ans * i)%MOD;
//      }
//      return ans;
//  }