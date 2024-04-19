#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int p = 31;
const int N = 1e5+2, m = 1e9+7;
// using string hashing
vi power(N);
int32_t main(){
    string s = "na";
    string t = "apnaa collegena";
    int T = t.size(), S = s.size();

    power[0] = 1;
    rep(i,1,N){
        power[i] = (power[i-1]*p)%m;
    }
    vi h(T+1,0);
    rep(i,0,T){
        h[i+1] = (h[i]+(t[i]-'a')*power[i])%m;
    }

    int h_s = 0;
    rep(i,0,S){
        h_s = (h_s + (s[i]-'a')*power[i])%m;
    }

    for(int i=0;i+S-1<T;i++){
        int cur_h = (h[i+S]-h[i]+m)%m;
        if(cur_h ==( h_s * power[i])%m){
            cout<<"Found at index "<<i<<endl;
        }
    }

    // output:
    // Found at index 2
    // Found at index 13
}   