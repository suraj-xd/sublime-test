#include <bits/stdc++.h>
using namespace std;
bool balancedParanthesis(string s){
    stack<char> st;
    bool ans = true;
    for (size_t i = 0; i < s.length(); i++)
    {
        if(!st.empty() and s[i]=='{' || s[i] == '[' || s[i] == '('){
            st.push(s[i]);
        }
        else if(!st.empty() and s[i]=='}'){
            if(!st.empty() and st.top()=='{'){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }
        else if(!st.empty() and s[i]==')'){
            if(!st.empty() and st.top()=='('){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }
        else if(!st.empty() and s[i]==']'){
            if(!st.empty() and st.top()=='['){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }
    }

    if(!st.empty())
        return false;
    return ans;
}
int main(){
    
    cout<<balancedParanthesis("{[()]}");

}


// char paranthesis(char c){
//     if(c=='}'){
//         return '{';
//     }
//     if(c==')'){
//         return '(';
//     }
//     if(c==']'){
//         return '[';
//     }else{
//         return '0';
//     }
// }