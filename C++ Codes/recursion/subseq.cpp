#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros = s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}
void subseq2(string s){
    multiset<string> st;
    st.insert("");
    for(auto it:s){
        multiset<string> temp;
        for(auto sub:st){
            string newstring = sub + it;
            cout << newstring << endl;
            temp.insert(newstring);
        }
        for(auto it1:temp) st.insert(it1);
    }
}
int main(){
    // subseq("123","");
    subseq2("123");
    
    cout<<endl;

}