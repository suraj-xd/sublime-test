#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int findMSB(int n)
{
  n = n | n >> 1;
  cout<<n<<endl;
  n = n | n >> 2;
  cout<<n<<endl;

  n = n | n >> 4;
  cout<<n<<endl;

  n = n | n >> 8;
  cout<<n<<endl;

  n = n | n >> 16;
  cout<<n<<endl;

  n = n + 1;

  return (n >> 1);
}
int main(){
    cout<<findMSB(76);
// 2
// 4
// 22
}