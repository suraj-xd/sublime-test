#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void findMax(string s,string &ans,int n,int k,int i){
    if(k==0) return;
    char maxx = s[i];
    rep(j,i+1,n){
        maxx =  max(maxx,s[j]);
    }
    if(maxx!=s[i]) k--;
    rep(j,i,n){
        if(s[j]==maxx){
            swap(s[i],s[j]);
            ans = max(ans,s);
            findMax(s,ans,n,k,i+1);
            swap(s[i],s[j]);
        }
    }
}
string findMaxNumString(string s,int k){
    if(k==0) return s;
    string ans = "";
    findMax(s,ans,s.size(),k,0);
    return ans;
}
int main(){
    string str = "1234567";
    cout<<findMaxNumString(str,3);
    
}