#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// brute force: can be done using min heap
vi prevSmaller(vi &a){
    stack<int> st;
    vi ans;
    for(auto &i:a){
        while(st.size() && st.top()>=i){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(st.top());
        }
        st.push(i);
    }
    return ans;
}
int main(){
    vi a = {4, 5, 2, 10, 8};
    vi ans = prevSmaller(a);
    for(auto it:ans) cout<<it<<" ";
}

// output: -1 4 -1 2 2