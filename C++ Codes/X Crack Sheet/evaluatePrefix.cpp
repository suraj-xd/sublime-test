#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int evaluatePrefix(string S){
    stack<int> st;
    for(int i=S.size()-1;i>=0;i--){
        if(S[i]>='0' && S[i]<='9'){
            st.push(S[i]-'0');
        }else{
            int f = st.top();
            st.pop();
            int s = st.top();
            st.pop();
            if (S[i] == '+')
                st.push(s + f);
            else if (S[i] == '-')
                st.push(s - f);
            else if (S[i] == '*')
                st.push(s * f);
            else if (S[i] == '/')
                st.push(s / f);
            }
    }
    return st.top();
}
int main(){
    string S = "+*245";
    cout<<evaluatePrefix(S);
}

// output:
// 13