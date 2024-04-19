  #include<bits/stdc++.h>
  using namespace std;
  #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
  #define MOD 1000000007
  #define MOD1 998244353
  #define inf 1e18
  #define nline "\n"
  #define pb push_back
  #define ppb pop_back
  #define mp make_pair
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
  #define rep(i,a,b)       for(int i=a;i<b;i++)
  #define test() int __ = 0; cin>>__; rep(_,0,__)
  #define py               cout<<"YES\n"
  #define pn               cout<<"NO\n"
  #define ms(a,x)          memset(a,x,sizeof(a))

  // // Policy based datastructure
  // #include <ext/pb_ds/assoc_container.hpp>
  // #include <ext/pb_ds/tree_policy.hpp>
  // using namespace __gnu_pbds;
  // template<class T>
  // using oset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

  typedef long long ll;
  typedef unsigned long long ull;
  typedef long double lld;
template<class t,class u> bool chmax(t&a,u b){if(a<b){a=b;return true;}else return false;}
template<class t,class u> bool chmin(t&a,u b){if(b<a){a=b;return true;}else return false;}
template<class t> using vc=vector<t>;
template<class t> using vvc=vc<vc<t>>;
  // typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
   

  template <class T> T maxnum(vector<T> a){ T num = INT_MIN; for(auto it:a) num = max(num,it); return num;}
  template <class T> T minnum(vector<T> a){ T num = INT_MAX; for(auto it:a) num = min(num,it); return num;}
  template <class T> void  output_vector(vector<T> a) {for(auto it:a) cout<<it<<' '; cout<<nline;}
   // calculate primes
 
  // ll msb(ll n){ n = n | n>>1; n = n | n>>2; n = n | n>>4; n = n | n>>8; n = n | n>>16; n = n | n>>32; n++; return (n>>1);}
   
  #ifndef ONLINE_JUDGE
  #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
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


/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
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
/*--------------------------------------------------------------------------------------------------------------------------*/

// Code - By - Suraj //
void paranthesis(int open,int close,string op){
  if(close==0 && open==0){
    debug(op);
    return;
  }
  if(open!=0){
    op.pb('(');
    paranthesis(open-1,close,op);
    op.pop_back();
  }
  if(close > open){
    op.pb(')');
    paranthesis(open,close-1,op);
    op.pop_back();
  }
}
void solve(){

  paranthesis(4,4,"");

}
  // ~Driver Code
  signed main() {
   
  // #ifndef ONLINE_JUDGE 
  //   freopen("Input.txt", "r", stdin);
  //   freopen("Output.txt", "w", stdout); 
  //   freopen("Error.txt", "w", stderr);
  // #endif    
    fastio();
    int test = 1;
    
    cin>>test;

    for(int __ = 0;__ < test;__++) solve();


  }
