  // Code - By - @suraj.xd //
  #include<bits/stdc++.h>
  #define Lord "Jai Shri Ram🙏🏾" 
  using namespace std;
  #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
  #define MOD 1000000007
  #define MOD1 998244353
  #define INF 1e18
  #define nline "\n"
  #define pb push_back
  #define ppb pop_back
  // #define mp make_pair
  #define ff first
  #define ss second
  #define PI 3.141592653589793238462
  #define set_bits __builtin_popcountll
  #define vll              vector<ll>
  #define vvll             vector<vll>  
  #define vi               vector<int>
  #define vvi              vector<vi>
  #define sz(x) ((int)(x).size())
  #define all(x) x.begin(), x.end()
  #define all1(v) (v).begin()+1,(v).end()
  #define rep(i,a,b)       for(int i=a;i<b;i++)
  #define test() int __ = 0; cin>>__; rep(_,0,__)
  #define py               cout<<"YES\n"
  #define pn               cout<<"NO\n"
  #define ms(a,x)          memset(a,x,sizeof(a))
  #define ub               upper_bound // leftmost element > val   
  #define lb               lower_bound // leftmost element >= val
  #define uniq(v)          (v).erase(unique(all(v)),(v).end())
  #define forit(x,a)       for(auto x:a)  
  #define fl(i,n) for(int i=0;i<n;i++)
  // Pragmas
  #pragma GCC optimize("O3,unroll-loops")
  #pragma GCC target("avx2")

  // Custom hash map
  struct custom_hash
  {
  static uint64_t splitmix64(uint64_t x)
  {
  x += 0x9e3779b97f4a7c15;
  x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
  x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
  return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const
  {
  static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
  return splitmix64(x + FIXED_RANDOM);
  }
  };
  template <typename T1, typename T2> // Key should be integer type
  using safe_map = unordered_map<T1, T2, custom_hash>;


  // // Policy based datastructure
  // #include <ext/pb_ds/assoc_container.hpp>
  // #include <ext/pb_ds/tree_policy.hpp>
  // using namespace __gnu_pbds;
  // template<class T>
  // using oset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
  typedef long long ll;
  typedef unsigned long long ull;
  typedef long double lld;
  template<class t,class u> bool chmax(t&a,u b){if(a<b){a=b;return true;}else return false;}
  template<class t,class u> bool chmin(t&a,u b){if(b<a){a=b;return true;}else return false;}
  template<class t> using vc=vector<t>;
  template<class t> using vvc=vc<vc<t>>;
  // typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

// own made functions

  template <class T> T maxnum(vector<T> a){ T num = INT_MIN; for(auto it:a) num = max(num,it); return num;}
  template <class T> T minnum(vector<T> a){ T num = INT_MAX; for(auto it:a) num = min(num,it); return num;}
  template <class T> void  output_vector(vector<T> a) {for(auto it:a) cout<<it<<' '; cout<<nline;}
  // ll msb(ll n){ n = n | n>>1; n = n | n>>2; n = n | n>>4; n = n | n>>8; n = n | n>>16; n = n | n>>32; n++; return (n>>1);}

  #ifndef ONLINE_JUDGE
  #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
  // #define prt(x) cout << #x <<" "; _print(x); cout << endl;

  #else
  #define debug(x)
  #endif


  void _print(ll t) {cerr << t;}
  void _print(int t) {cerr << t;}
  void _print(string t) {cerr << t;}
  void _print(char t) {cerr << t;}
  void _print(lld t) {cerr << t;}
  void _print(double t) {cerr << t;}
  void _print(ull t) {cerr << t;}


  template <class T, class V> void _print(pair <T, V> p);
  template <class T> void _print(vector <T> v);
  template <class T> void _print(set <T> v);
  template <class T, class V> void _print(map <T, V> v);
  template <class T> void _print(multiset <T> v);
  template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
  template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
  template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
  template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
  template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
  template <class T, class V> void _print(queue <T, V> q) {cerr << "[ "; while(q.size()) {_print(q.front()); q.pop();  cerr << " ";} cerr << "]";}
  template <class T, class V> void _print(stack <T, V> st) {cerr << "[ "; while(st.size()) {_print(st.top()); st.pop();  cerr << " ";} cerr << "]";}
  template <class T> void read(vector<T> &a){ for(auto &it:a) cin>>it;}
  template <class T> void read(T &a){cin>>a;} template <class T> void read(T &a,T &b){cin>>a>>b;} template <class T> void read(T &a,T &b,T &c){cin>>a>>b>>c;} template <class T> void read(T &a,T &b,T &c,T &d){cin>>a>>b>>c>>d;}
  template <class T, class V> void _print(priority_queue <T, V> st) {cerr << "[ "; while(st.size()) {_print(st.top()); st.pop();  cerr << " ";} cerr << "]";}
  // output
  template<typename T> istream& operator >>(istream &in,vector<T> &v){ for(auto &x:v) in>>x; return in;}
  template<typename T> ostream& operator <<(ostream &out,const vector<T> &v){ for(auto &x:v) out<<x<<' '; return out;}
  template<typename T1,typename T2> istream& operator >>(istream &in,pair<T1,T2> &p){ in>>p.first>>p.second; return in;}
  template<typename T1,typename T2> ostream& operator <<(ostream &out,const pair<T1,T2> &p){ out<<p.first<<' '<<p.second; return out;}
  // print template
  template <typename T>
  void print(T &&t)  { cout << t << "\n"; }
  template <typename T, typename... Args>
  void print(T &&t, Args &&... args)
  {
  cout << t << " ";
  print(forward<Args>(args)...);
  }  
  #define lli long long int
  /*---------------------------------------------------------------------------------------------------------------------------*/
  // bool isPowerof2(int n){ return (n && !(n & n-1));}
  int fact(unsigned long long int n) { if (n == 0 || n == 1) return 1; else return n * fact(n - 1);}
  ll gcd(int a, int b) { while (b) {   a %= b; swap(a, b);}return a;}
  lli lcm(lli a, lli b){return (a/gcd(a,b)*b);}
  ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
  void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
  ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
  ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
  bool revsort(ll a, ll b) {return a > b;}
  void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
  ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
  void google(int t) {cout << "Case #" << t << ": ";}
  vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
  ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
  ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
  ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
  ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
  ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
  ll modpow(ll x, ll n, int m = MOD1) { if (x == 0 && n == 0) return 0;  ll res = 1;  while (n > 0) { if (n % 2)  res = (res * x) % m;  x = (x * x) % m; n /= 2; } return res;}
  ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;} 
  ll pwr(ll a, ll b) {a %= MOD; ll res = 1; while (b > 0) {if (b & 1) res = res * a % MOD; a = a * a % MOD; b >>= 1;} return res;}
  #define int long long int
  bool oneTestcase = false  , googleComp = false; 
  /*--------------------------------------------------------------------------------------------------------------------------*/

void solve(){

  int n; cin >> n;
  vi a(n); cin >> a;
  for(int i =0;i < n;i++){
    int now = a[i];
    int masks = (now-1)&now;
    while(masks){
      debug(masks)
      masks -= 1;
      masks &= now;
    }
  }
}
  // ~Driver Code
  signed main(){   
    fastio();
    int test = 1;
    if(!oneTestcase) cin>>test;  
    // cout << fixed << setprecision(6);
    for(int tet= 1 ; tet <= test;tet++){
      if(googleComp) google(tet);
      solve();
    }
  }


  //   for(int mask = 0;mask < (1<<3);mask++){
  //   for(int submask = mask;submask;submask = (submask-1)&(mask)){
  //     for(int i = 0; i< 3;i++){
  //       if((submask>>i)&1) cout << a[i] << ' ';
  //     }cout << nline;
  //   }
  // }

