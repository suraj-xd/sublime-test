#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool check(string &s,int i,int j){
    while(i<j){
        if(s[i++]!=s[j--]){
            return false;
        }
    }
    return true;
}
void dfs(string &s,int idx,vector<vector<string>> &ans,vector<string> atn){
    if(s.size()==idx){
        ans.push_back(atn);
        return;
    }

    rep(i,idx,s.size()){
        if(check(s,idx,i)){
            atn.push_back(s.substr(idx,i-idx+1));
            dfs(s,i+1,ans,atn);
            atn.pop_back();
        }
    }
}
vector<vector<string>> palindromePartition(string s){
    vector<vector<string>> ans;
    dfs(s,0,ans,{});
    return ans;
}
int main(){
    string s  = "aab";
    vector<vector<string>> ans = palindromePartition(s);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// output:
// a a b 
// aa b