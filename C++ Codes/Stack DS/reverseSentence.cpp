#include <bits/stdc++.h>
using namespace std;
void reverseSentence(string s){
    stack<string> st;
    for (size_t i = 0; i < s.length(); i++)
    {
        string word  =  "";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    
}
int main(){
    string s = "hello, this is suraj";
    reverseSentence(s);
}