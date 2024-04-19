#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int celebrity(vvi &M,int n){
  stack<int> st;
  rep(i,0,n) st.push(i);
  while(st.size()>1){
    int i = st.top();
    st.pop();
    int j = st.top();
    st.pop();
    if(M[i][j] && M[j][j]) continue;
    else if(M[i][j]) st.push(j);
    else if(M[j][i]) st.push(i);
    else continue;
  }
  if(st.size()){
    int c = st.top();
    int a = 0, b = 0;
    rep(i,0,n){
      if(M[i][c]) a++;
      if(M[c][i]) b++;
    }
    if(a==n-1 && b==0) return c;
  }
  return -1;
}
int main(){
    vvi M;
    M = {{0, 1, 0,1},
         {0 ,0 ,0,0}, 
         {0 ,1, 0,1},
         {1,0,0,0}};
    int ans = celebrity(M,4);
    cout<<ans;
}