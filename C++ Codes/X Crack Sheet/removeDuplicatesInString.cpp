#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int32_t main(){
    speedo
    string s = "bcabc";
    stack<char> st;
    vector<bool> taken(26,false);
    vector<int> lastIndex(26,-1);
    rep(i,0,s.size()){
        lastIndex[s[i]-'a'] = i;
    }
    for (int i = 0; i < s.size(); ++i)
    {
      if (taken[s[i] - 'a'] == true)
        continue;

      if (st.empty())
      {
        st.push(s[i]);
        taken[s[i] - 'a'] = true;
      }
      else
      {
        while (st.size() && s[i] < st.top() && i < lastIndex[st.top() - 'a'])
        {
          taken[st.top() - 'a'] = false;
          st.pop();
        }
        st.push(s[i]);
        taken[s[i] - 'a'] = true;
      }
    }
    string ans;
    while(st.size()){
        char ch = st.top();
        ans = ch + ans;
        st.pop();
    }
    cout<<ans;
}