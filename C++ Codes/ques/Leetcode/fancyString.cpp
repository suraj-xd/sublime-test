#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
string fancyString(string s){
    int i = 0;
    int n = s.length();
    while(i!=n-3){
        if((s[i]==s[i+1]) && (s[i+1]==s[i+2])){
            s = s.substr(0,i)+s.substr(i+1);
            i--;
        }
        i++;
    }
    return s;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<fancyString(s)<<endl;
    }
}
// input: 3
// leetcode
// aab
// aaabaaaa

// output:
// leetcode
// aab
// aabaa