#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class MinStack{
    public:
    int MIN;
    stack<int> st;
    MinStack(){
        MIN = INT_MAX;
    }
    void push(int val){
        if(val<=MIN){
            st.push(MIN);
            MIN = val;
        }
        st.push(val);
    }

    void pop(){
        if(st.top()==MIN){
            st.pop();
            MIN = st.top();
        }
        st.top();
    }

    int top(){
        return st.top();
    }
    int getMin(){
        return MIN;
    }
};
int main(){
    
}