#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
string FirstNonReapeating(string s){
    list<char> dll,temp;
    vector<int> repeat(26,0);
    vector<list<char>::iterator> ptr(26,temp.end());
    string ans = "";
    for(auto &i:s){
        if(!repeat[i-'a'] && ptr[i-'a']==temp.end()){
            dll.push_back(i);
            auto it = dll.end();
            it--;
            ptr[i-'a'] = it;
        }else if(!repeat[i-'a'] && ptr[i-'a']!=temp.end()){
            dll.erase(ptr[i-'a']);
            repeat[i-'a'] = 1;
        }
        if(dll.size()) ans.push_back(dll.front());
        else ans.push_back('#');
    }
    return ans;
}
int main(){
    cout<<FirstNonReapeating("aabc");
}

// a#bb