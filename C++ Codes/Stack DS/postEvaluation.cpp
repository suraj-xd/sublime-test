#include <bits/stdc++.h>
#include <stack>
#include <math.h>
using namespace std;
int postfixEvaluation(string s){
    stack<int> st;
    for (size_t i = 0; i <= s.length()-1; i++)
    {
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break; 
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;   
            }
        }
    }
    return st.top();
}
int main(){
    cout<<postfixEvaluation("02+45*7+-");
}
// prefix "-+7*45+20" ((7+(4*5))-2+0) postfix "45*7+2-0+"
// postfix "24*3+" ((2*4)+3)  