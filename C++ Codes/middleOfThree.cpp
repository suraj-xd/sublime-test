#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int findMid(int a,int b,int c){
  if(a > b){
      if(a < c) return a;
      else if(b > c && c < a) return b;
      else return c;
  }else{
      if(c > b) return b;
      else if( a > c && a<b) return a;
      else return c;
  }
}
int main(){
  int A = 978, B = 518, C = 300;
  cout<<findMid(A,B,C);

}