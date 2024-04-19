#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// we hashes the strings and then compaired
const int N = 1e5+3, m = 1e9+7;
int powers[N];
int p = 31;
int calculate_hash(string s){
    int hash = 0;
    rep(i,0,s.size()){
        hash =( hash + (s[i]-'a' + 1)*powers[i]);
    }
    return hash;
}
int32_t main(){
    powers[0] = 1;
    rep(i,1,N){
        powers[i] = (powers[i-1]*p)%m;
    }
    vector<string> strings = {"aa","b","aa","c","ad","aa"};
    vi hashes;
    // iterating (nm)
    for(auto w: strings){
        hashes.push_back(calculate_hash(w));
    }
    // sorting(nlogn)
    // TM = (nm + nlogn)
    sort(hashes.begin(),hashes.end());

    int distinct = 0;
    rep(i,0,hashes.size()){
        if(i==0 or hashes[i] != hashes[i-1]){
            distinct++;
        }
    }

    cout<<distinct;
    // output: 4
    
}