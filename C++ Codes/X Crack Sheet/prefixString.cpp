#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    vector<string> s = {"flower","flow","flight"};
    string ans = s[0];
    for(auto &word:s){
        int i = 0, j = 0, flag = 1;
        while(i<ans.size() || j<word.size()){
            if(ans[i]==word[j]){
                i++,j++;
            }else{
                flag++;
                break;
            }
        }
        if(!flag && i==0) ans = "";
        else ans = ans.substr(0,i);
    }
    cout<<ans;
}