#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
string chooseAndSwap(string s){
    vi first(256,INT_MAX);
    rep(i,0,s.size()){
        if(first[s[i]]>i){
            first[s[i]]=i;
        }
    }

    auto f = '0', cha = '0';
    for(int i=0;i<s.size();i++){
        for(auto ch = 'a';ch<='z';ch++){
            if(ch<s[i] && first[ch]!=INT_MAX && first[ch]>i){
                f = ch;
                cha = s[i];
            }
        }
        if(f!='0'){
            break;
        }
    }
    rep(i,0,s.size()){
        if(s[i]==f){
            s[i] = cha;
        }else if(s[i]==cha){
            s[i]= f;
        }
    }
    return s;
}
int main(){
    string s = "ccad";
    cout<<chooseAndSwap(s);
}
// output:
// aacd