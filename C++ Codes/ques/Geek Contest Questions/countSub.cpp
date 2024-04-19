#include <bits/stdc++.h>
using namespace std;
// find the subsarrays of equal amount of capital and small letters
vector<string> countSub(string s){
    vector<string> ans;
    for (size_t i = 0; i < s.length(); i++)
    {   
        int lc = 0;
        int uc = 0;
        for (size_t j = i; j < s.length(); j++)
        {   
            if(s[j]>='a' && s[j]<='z'){
                lc++;
            }else{
                uc++;
            }
            if(lc==uc){
                string S = "";
                for(int k=i;k<=j;k++){
                    S+=s[k];
                }
                ans.push_back(S);
            }
        }
    }
    return ans;
}
int main(){
    string s = "gEEk";
    vector<string> ans = countSub(s);
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    // ge gEEk Ek 
    
    
}