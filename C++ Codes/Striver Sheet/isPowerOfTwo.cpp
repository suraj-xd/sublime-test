#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool isPowerOfTwo(int n)
  {
    if (n <= 0)
      return false;
    return !(n & n - 1);
  }
int main(){
    while(1){
        int n;
        cin>>n;
        if(n==-1) break;
        cout<<isPowerOfTwo(n)<<endl;
    }
}