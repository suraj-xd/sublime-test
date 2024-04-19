#include <bits/stdc++.h>
using namespace std;
// using mod property

// recursive
const int N = 1e5+2, MOD = 1e9+7;
int powerRecursive(int a,int n){
    if(n==0) return 1;
    int p = powerRecursive(a,n/2)%MOD;

    if(n&1){
        return (((p*p%MOD)*a)%MOD);
    }else{
        return (p*p)%MOD;
    }
}
// iterative
int powerIterative(int a, int n){
    
    a%=MOD;
    cout<<a<<endl;
    int ans = 1;
    while(n>0){
        if(n&1){
            ans = (ans*a)%MOD;
        }
        a = (a*a)%MOD;
        n = n>>1;
    }
    return ans;
}
// iterative
int power(int x, int n){
    long long ans = 1;
    while(n>0){
        if(n%2==1){
            ans = ans* x;
        }
        x = x*x;
        n/=2;
    }
    return ans;
}
// efficient
int power(int x,int n){
    if(n==0) return 1;
    int X = power(x,n/2);
    if(n%2==0) return X * X;
    else return X * X * x;
}
//  for negative powers too
  double myPow(double x, int n)
  {
    long long N = abs(n);
    double ans = 1.0;
    while (N > 0)
    {
      if (N % 2 == 1)
      {
        ans = ans * x;
        N--;
      }
      else
      {
        x = x * x;
        N = N / 2;
      }
    }

    if (n < 0)
      return 1.0 / ans;
    else
      return ans;
  }
// recursive method

int pow(int x, int n){
    if(n==0){
        return 1;
    }

    if(n%2==0){
        return pow(x,n/2)*pow(x,n/2);
    }else{
        return x*pow(x,(n-1)/2)*pow(x,(n-1)/2);
    }
}

int main(){
    int x; cin>>x;
    int n; cin>>n;
    int ans = 1;
    // if(n%2==0){
    //     for (size_t i = 0; i < n/2; i++)
    //     {
    //         ans*=x;
    //     }
    //     for (size_t i = 0; i < n/2; i++)
    //     {
    //         ans*=x;
    //     }
    // }else{
    //     for (size_t i = 0; i < n/2; i++)
    //     {
    //         ans*=x;
    //     }
    //     for (size_t i = 0; i < n/2; i++)
    //     {
    //         ans*=x;
    //     }
    //     ans*=x;
    // }
    
    cout<<pow(2,3);
    
    
}