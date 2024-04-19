  #include<bits/stdc++.h>
  using namespace std;
  #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
  #define MOD 1000000007
  #define MOD1 998244353
  #define INF 1e18
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

  // // Policy based datastructure
  // #include <ext/pb_ds/assoc_container.hpp>
  // #include <ext/pb_ds/tree_policy.hpp>
  // using namespace __gnu_pbds;
  // template<class T>
  // using oset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

  typedef long long ll;
  typedef unsigned long long ull;
  typedef long double lld;
  // typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
   
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

  // calculate primes
  // #define LIMIT 1000000
  // long long prime_flag[LIMIT];
  // void calculate_prime_flag(){long long i, j; prime_flag[0] = prime_flag[1] = 1;for(i=2;i<LIMIT;i++){if (prime_flag[i]==0){for(j=i*i;j<LIMIT;j+=i){prime_flag[j] = 1;}}}}
   
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

   
  /// Code - By - Suraj //


void solve(){

  

}

  // ~Driver Code
  signed main() {
   
  #ifndef ONLINE_JUDGE 
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout); 
    freopen("Error.txt", "w", stderr);
  #endif  
    fastio();
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    
    solve();
    

    //
    end = std::chrono::high_resolution_clock::now();
    ll elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
    ofstream out("time.txt");
    out<< "Elapsed Time: " << elapsed_time << "ms\n";

  }

// divisors  

//   ll calculateFactorsCount(int n){
//   ll cnt= 0;
//   for(int i = 1;i <=sqrt(n);i++){
//     if(n%i==0){
//       cnt++;
//       if(i*i!=n){
//         cnt++;
//       }
//     }
//   }
//   return cnt;
// }
// void solve(){
//   calculate_prime_flag();
//   int n; cin>>n;
//   ll ans = 0;
//   for(int i = 1;i <=n;i++){
//     if(!prime_flag[i]){
//       ans+= 2;
//     }else{
//       ans+= calculateFactorsCount(i);
//     }
//   }
//   cout<<ans<<nline;
// } 
    // rock paper
  // #include <iostream>
  // #include<bits/stdc++.h>
  // #define ll long long int
  // using namespace std;

  // ll t,n;
  // int main() {
  //   // your code goes here
  //     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  //   cin>>t;
  //   while(t--){
  //       cin>>n;
  //       string s;
  //       cin>>s;
  //      unordered_map<char,vector<ll>> mp;
  //       for(ll i = 0;i<n;i++){
  //           mp[s[i]].push_back(i);
  //       }
  //     for(ll i = 0;i<n-1;i++){
  //           if(s[i]=='R'){
  //               char c= 'P';
  //               vector<ll> b=mp[c];
  //               ll idx= lower_bound(b.begin(),b.end(),i)-b.begin();
  //               if(idx==b.size()){
  //                   nxt[i] =-1;
  //               }else{
  //                   nxt[i] =b[idx];
  //               }
  //           }else if(s[i]=='P'){
  //               char c='S';
  //               vector<ll> b=mp[c];
  //               ll idx= lower_bound(b.begin(),b.end(),i)-b.begin();
  //               if(idx==b.size()){
  //                   nxt[i] =-1;
  //               }else{
  //                   nxt[i] =b[idx];
  //               }
  //             //  cout<<"P"<<endl;
                
  //           }else if(s[i]=='S'){
  //                 char c= 'R';
  //               vector<ll> b=mp[c];
  //               ll idx= upper_bound(b.begin(),b.end(),i)-b.begin();
  //               if(idx==b.size()){
  //                   nxt[i] =-1;
  //               }else{
  //                   nxt[i] =b[idx];
  //               }
  //              // cout<<"S"<<endl;
  //           }
  //       }    
    
  //   vector<char> ans(n);
  //       ans[n-1] =s[n-1];
  //       vector<ll> nxt(n);
  //       nxt[n-1] =n-1;
  //       ll lstR=-1;
  //       ll lstS=-1;
  //       ll lstP=-1;
  //       if(s[n-1]=='R'){
  //           lstR=n-1;
  //       }else if(s[n-1]=='S'){
  //           lstS=n-1;
  //       }else if(s[n-1]=='P'){
  //           lstP=n-1;
  //       }
  //     for(ll i=n-2;i>=0;i--){
  //         if(s[i]=='R'){
  //             nxt[i]=lstP;
  //             lstR=i;
  //         }else if(s[i]=='S'){
  //             nxt[i]=lstR;
  //             lstS=i;
  //         }else if(s[i]=='P'){
  //             nxt[i]=lstS;
  //             lstP=i;
  //         }
  //     }
  //     // for(auto x:nxt){
  //         //  cout<<x<<" ";
  //     // }
  //       //cout<<endl;
  //     //  char c= 'R';
  //     //  vector<ll> r=mp[c];
  //     //  for(auto x:r){
  //      //     cout<<x<<" ";
  //      // }
  //   unordered_map<ll,char> mp2;
  //    mp2[n-1]=s[n-1];
  //    for(ll i = n-2;i>=0;i--){
  //        if(nxt[i]==n-1){
  //            ans[i]=s[n-1];
  //            mp2[i]=ans[i];
  //        }else if(nxt[i]==-1){
  //            ans[i]=s[i];
  //            mp2[i]=ans[i];
  //        }else{
  //            ll idx=nxt[i];
  //            ans[i]=mp2[idx];
  //            mp2[i]=ans[i];
  //        }
  //    }
  //    for(auto x:ans){
  //        cout<<x;
  //    }
  //    cout<<endl;
        
  //   }
  //   return 0;
  // }