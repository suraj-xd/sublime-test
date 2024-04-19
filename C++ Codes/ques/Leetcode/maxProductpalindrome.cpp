#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int maxProductpalindrome(string s){
    if(s.length()<4) return -1;
    int n = s.length();
    int i,j;
    if(n%2!=0) i = (n/2)+1;
    else i = (n/2);  
    j = (n/2);
    string s1 = s.substr(0,i);
    string s2 = s.substr(j,n);
    i = 0,j = s1.length()-1;
    int cnt1 = 1;
    while(i<j){
        if(s1[i]==s1[j]) cnt1+=2;
        i++,j--;
    }
    i = 0,j = s2.length()-1;
    int cnt2 = 1;
    while(i<j){
        if(s2[i]==s2[j]) cnt2+=2;
        i++,j--;
    }
    return cnt1*cnt2;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<maxProductpalindrome(s)<<endl;
    }
}
// input:
// 2
// ababbb
// zaaaxbbby

// output: 9 
//         9