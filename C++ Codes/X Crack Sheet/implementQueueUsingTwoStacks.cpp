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
stack<int>s1;
stack<int>s2;
void push(int x)
{
  s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int pop()
{
  if (s1.size() < 1)
    return -1;
  while (s1.size() > 1)
  {
    s2.push(s1.top());
    s1.pop();
  }
  int ans = s1.top();
  s1.pop();
  while (s2.size())
  {
    s1.push(s2.top());
    s2.pop();
  }
  return ans;
}
int32_t main(){
    push(1);
    push(2);
    push(3);
    push(4);
    cout<<pop();
    push(5);
    cout<<pop();
}