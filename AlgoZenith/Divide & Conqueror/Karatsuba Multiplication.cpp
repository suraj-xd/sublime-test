// Description

// You have given two polynomials of degree n as:
// A(x) = a0 + a1x + ... + anxn
// B(x) = b0 + b1x + ... + bnxn

// C(x) = A(x) * B(x) = c0 + c1x + ... + cnx2n

// Find c0, c1, c2, ..., c2n.


#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define EB emplace_back
#define MP make_pair
#define all(o) (o).begin(), (o).end()
#define mset(m,v) memset(m,v,sizeof(m))
#define fr(i,n) for(lli i=0;i<n;++i)
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
#define endl '\n'
#define debarr(a,n) cout<<#a<<" : ";for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debmat(mat,row,col) cout<<#mat<<" :\n";for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const unordered_set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const multiset<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}
typedef long long int lli;    typedef long double ld;
typedef pair< lli,lli > ii;   typedef vector<lli> vi;
typedef vector<ii> vii;       typedef vector<vi> graph;
lli MOD=1000000007;           long double EPS=1e-9;
lli binpow(lli b,lli p,lli mod){lli ans=1;for(;p;p>>=1){if(p&1)ans=ans*b%mod;b=b*b%mod;}return ans;}

void pre(){

}

vi karatsubaMultiply ( const vi &a, const vi &b ) {
    int n = a.size();
    vi res ( n + n );
    if ( n <= 32 ) {
        for ( int i = 0; i < n; i++ )
            for ( int j = 0; j < n; j++ )
                res[i + j] += a[i] * b[j];
        return res;
    }
    int k = n >> 1;
    vi a1 ( a.begin(), a.begin() + k );
    vi a2 ( a.begin() + k, a.end() );
    vi b1 ( b.begin(), b.begin() + k );
    vi b2 ( b.begin() + k, b.end() );
    vi a1b1 = karatsubaMultiply ( a1, b1 );
    vi a2b2 = karatsubaMultiply ( a2, b2 );
    for ( int i = 0; i < k; i++ )
        a2[i] += a1[i];
    for ( int i = 0; i < k; i++ )
        b2[i] += b1[i];
    vi r = karatsubaMultiply ( a2, b2 );
    for ( int i = 0; i < ( int ) a1b1.size(); i++ )
        r[i] -= a1b1[i];
    for ( int i = 0; i < ( int ) a2b2.size(); i++ )
        r[i] -= a2b2[i];
    for ( int i = 0; i < ( int ) r.size(); i++ )
        res[i + k] += r[i];
    for ( int i = 0; i < ( int ) a1b1.size(); i++ )
        res[i] += a1b1[i];
    for ( int i = 0; i < ( int ) a2b2.size(); i++ )
        res[i + n] += a2b2[i];
    return res;
}

vi mult(vi a,vi b){
    if(a.size()==1){
        return {a[0]*b[0],0};
    }
    vi a0,a1,b0,b1,c0,c1;
    int nn=a.size()/2;
    rep(i,0,nn-1){
        a0.EB(a[i]);
        b0.EB(b[i]);
        c0.EB(a[i]+a[i+nn]);
        c1.EB(b[i]+b[nn+i]);
    }
    rep(i,nn,2*nn-1){
        a1.EB(a[i]);
        b1.EB(b[i]);
    }
    vi res00=mult(a0,b0);
    vi res11=mult(a1,b1);
    vi res01=mult(c0,c1);
    rep(i,0,2*nn-1){
        res01[i]-=res00[i]+res11[i];
    }
    vi fin(4*nn,0);
    fr(i,2*nn){
        fin[i]+=res00[i];
        fin[i+nn]+=res01[i];
        fin[i+2*nn]+=res11[i];
    }
    return fin;
}

void solve(){
    lli n;
    cin>>n;
    vi a(n+1),b(n+1);
    fr(i,n+1)cin>>a[i];
    fr(i,n+1)cin>>b[i];
    reverse(all(a));
    reverse(all(b));
    int nn=a.size();
    nn=a.size();
    while(nn&(nn-1)){
        a.EB(0);
        nn++;
    }
    nn=b.size();
    while(nn&(nn-1)){
        b.EB(0);
        nn++;
    }
    vi ans=karatsubaMultiply(a,b);
    ans.resize(2*n+1);
    reverse(all(ans));
    rep(i,0,2*n)cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    pre();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<": ";
        solve();
    }
}