#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
string countAndSay(int n){
    if(n==1) return "1";
    auto prev = countAndSay(n-1);
    string ans = "";
    int N =prev.size(), count = 1;
    rep(i,0,N){
        if(i==N-1){
            ans+=to_string(count);
            ans+=prev[i];
        }else if(prev[i]==prev[i+1]){
            count++;
        }else{
            ans+=to_string(count);
            ans+=prev[i];
            count = 1;
        }
    }

    return ans;
}
int main(){
    int n; cin>>n;
    cout<<countAndSay(n);
}
// input: 4
// output: 1211