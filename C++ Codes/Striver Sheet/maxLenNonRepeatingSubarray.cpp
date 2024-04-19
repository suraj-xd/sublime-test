#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int maxLenNonRepeatingSubarray(string s){
    int ans = 0;
    vector<int> freq(256,-1);
    int maxLen = 0,start = -1;
    rep(i,0,s.length()){
        if(freq[s[i]]>start){
            start = freq[s[i]];
        }
        freq[s[i]] = i;
        maxLen = max(maxLen,i-start);
    }
    return maxLen;
}
int main(){
    string s = "abcbbcabcdb";
    cout<<maxLenNonRepeatingSubarray(s);
    // output: 4
}