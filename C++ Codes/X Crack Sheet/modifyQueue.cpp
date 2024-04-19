#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
queue<int> modifyQueue(queue<int> q, int k)
{
  stack<int> st;
  queue<int> qt;

  for (int i = 0; i < k; ++i)
  {
    st.push(q.front());
    q.pop();
  }

  while (q.size())
  {
    qt.push(q.front());
    q.pop();
  }

  while (st.size())
  {
    q.push(st.top());
    st.pop();
  }

  while (qt.size())
  {
    q.push(qt.front());
    qt.pop();
  }

  return q;
}
int32_t main(){
    speedo
    int n = 5,  k =  3;
    vi a = {1, 2 ,3 ,4 ,5};
    queue<int> q;
    rep(i,0,n) q.push(a[i]);
    stack<int> st;
    while(!q.empty() ||  q.size()>k){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    queue<int> qq;
    rep(i,0,n-k){
        qq.push(q.front());
        q.pop();
    }
    while(!qq.empty()){
        q.push(qq.front());
        qq.pop();
    }
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
}