#include <bits/stdc++.h>
using namespace std;
int rain_water(vector<int> a){
    stack<int>st; int ans=0;
    for (size_t i = 0; i < a.size(); i++)
    {
        while(!st.empty() and a[st.top()]<a[i]){
            int cur = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff= i-st.top()-1;
            ans+=(min(a[st.top()],a[i])-a[cur])*diff;
        }
        st.push(i);
    }
    return ans;
    
}
int main(){
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a);
}