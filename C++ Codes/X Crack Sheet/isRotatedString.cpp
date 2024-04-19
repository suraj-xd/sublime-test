#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool isRotatedString(string s1, string s2){
    auto temp = s1+s1;
    rep(i,0,temp.size()){
        cout<<temp.substr(i,s2.size())<<endl;
        if(temp[i]==s2[0] && temp.substr(i,s2.size())==s2){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "geeksforgeeks";
    string s2 = "forgeeksgeeks";
    cout<<isRotatedString(s1,s2);
}

// geeksforgeeks
// eeksforgeeksg
// eksforgeeksge
// ksforgeeksgee
// sforgeeksgeek
// forgeeksgeeks
// 1