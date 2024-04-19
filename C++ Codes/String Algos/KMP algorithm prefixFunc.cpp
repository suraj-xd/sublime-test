#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vi prefix_function(string s){
    int n = s.size();
    vi pi(n,0);
    rep(i,1,n){
        int j = pi[i-1];
        while(j>0 && s[i]!=s[j]){
            j = pi[i-1];
        }

        if(s[i] == s[j]){
            j++;
        }
        pi[i] = j;
    }

    return pi;
}
int main(){
    string s = "hrx";
    string t = "aphrx collegehrxshrx";
    vi prefix = prefix_function(s);
    int pos = -1;
    int i(0),j(0);
    while(i < t.size()){
        if(t[i]==s[j]){
            j++;
            i++;
        }else{
            if(j!=0){
                j = prefix[j-1];
            }else{
                i++;
            }
        }

        if(j == s.size()){
            pos = i-s.size();
        }
        
    }
    cout<<pos;
}