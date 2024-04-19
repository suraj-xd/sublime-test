#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int evaluatePostfix(string S){
    stack<int> st;
    for(auto i:S){
        if(i>='0' && i<='9'){
            st.push(i-'0');
        }else{
            int f = st.top();
            st.pop();
            int s = st.top();
            st.pop();
            if (i == '+')
                st.push(s + f);
            else if (i == '-')
                st.push(s - f);
            else if (i == '*')
                st.push(s * f);
            else if (i == '/')
                st.push(s / f);
            }
    }
    return st.top();
}
int main(){
    string S = "231*+9-";
    cout<<evaluatePostfix(S);
}

// output:
// -4