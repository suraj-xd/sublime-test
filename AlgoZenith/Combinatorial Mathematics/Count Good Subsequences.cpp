// Description

// You are given a sequence A1, A2, …, AN. Let's call a subsequence Ai1, Ai2, …, Aik (for any k > 0, 1 ≤ i1 < i2 < … < ik ≤ N) good if the median of this subsequence is an element of this subsequence. 
// Find the number of good subsequences. Since this number may be large, compute it modulo 1000000007 (109+7).

// Note:

// The median of a set of data is the middlemost number in the set. The median is also the number that is halfway into the set. To find the median, the data should first be arranged in order from least to greatest.
// For odd length sequence, the median is the middle element in the sorted sequence. While for even length sequence, it is the average of the middle two elements.


#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip> 

using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout) 
#define primeDEN 727999983
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll inv[100003],mult[100003],invmult[100003];
ll gcd(ll a,ll b){
	while(b!=0){
		
		a=a%b;
		swap(a,b);
	}
	return a;
}

ll extend_gcd(ll a,ll b,ll &x,ll &y){
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	ll x1,y1;
	ll ans =extend_gcd(b,a%b,x1,y1);
	x=y1;
	y=x1-(a/b)*y1;

	return ans;
}

ll combination(ll n,ll r){
	if(r==0)
		return 1;
	if(n<r)
		return 0;
	ll ans=1;
	ans*=mult[n];
	ans%=mod;
	ans*=invmult[r];
	ans%=mod;
	ans*=invmult[n-r];
	ans%=mod;
	return ans;
}

ll initcombi(){
	int i;
	f(i,1,100001){
		ll x,y;
		ll val=extend_gcd(mod,i,x,y);
		if(y>0)
			inv[i]=y%mod;
		else{
				inv[i]=(y+mod)%mod;
		}
	}
	mult[0]=1;
	f(i,1,100001){
		mult[i]=mult[i-1]*i;
		mult[i]%=mod;
	}
	invmult[0]=1;
	f(i,1,100001){
		invmult[i]=invmult[i-1]*inv[i];
		invmult[i]%=mod;
	}
	return 0;
}


// do initcombi();
int a[12345],en[12345];
int getans(int l,int r){
	int i;
	ll ans=0;
	rep(i,min(l,r-1)+1){
		ans+=combination(l,i)*combination(r,i+1);
		ans%=mod;
	}
	return ans;
}
int main(){
    std::ios::sync_with_stdio(false); cin.tie(NULL);
    initcombi();
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int i;
    	rep(i,n){
    		cin>>a[i];
    	}
    	sort(a,a+n);
    	ll ans=1;
    	rep(i,n-1){
    		ans*=2;
    		ans%=mod;
    	}
    	rep(i,n){
    		en[a[i]]=i;
    	}
    	int l,r;
    	rep(i,n){
    		l=i;
    		r=n-i-1;
    		ans+=getans(l,r);
    		l=i;
    		r=n-en[a[i]]-1;
    		ans-=getans(l,r);
    	}
    	ans%=mod;
    	ans+=mod;
    	ans%=mod;
    	cout<<ans<<endl;
    }
    
    return 0;   
}