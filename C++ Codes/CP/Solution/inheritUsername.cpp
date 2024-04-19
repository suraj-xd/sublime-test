#include <bits/stdc++.h>
using namespace std;
bool validLen(string s){
    if(s.length()>=3){
        return true;
    }
    return false;
}
bool invalidName(string s){
    if(validLen(s)){
        for (size_t i = 0; i < s.length(); i++)
        {
            if(s[i]=='w' && s[i+1]=='w'){
                return true;
            }
        }
        
    }
    return false;
}
int main(){
    int t; cin>>t;
    while(t--){
        string username;
        cin>>username;
        if(validLen(username) && !invalidName(username))
            cout<<"Valid"<<endl;

        if(!validLen(username))
            cout<<"too short: "<<username.length()<<endl;
        
        if(invalidName(username))
            cout<<"Invalid"<<endl;
    }

}

// 3
// Peter
// Me
// Arwwz

// Valid
// Too short: 2
// Invalid