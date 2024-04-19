// Description

// Given an array of N integers and Q queries. In each query, you are given two parameters L and R; you have to find the following:

// 1. Smallest integer X1 such that the value of (AL XOR X1) + (AL+1 XOR X1) + ... + (AR XOR X1) is maximum possible.

// 2. Smallest integer X2 such that the value of (AL OR X2) + (AL+1 OR X2) + ... + (AR OR X2) is maximum possible.

// 3. Smallest integer X3 such that the value of (AL AND X3) + (AL+1 AND X3) + ... + (AR AND X3) is maximum possible.

// Range of X1, X2, X3 allowed → 0 <= X1, X2, X3 < 2^31.

// Print the sum of X1, X2, X3 for each query in a newline.

#include <bits/stdc++.h>
using namespace std;
int prefSum[1000001][31];
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   int testcases;
   cin>>testcases;
   while(testcases--)
   {
       int n,q;
       int i;
       cin>>n;
       for(i=0;i<=n;i++)
         for(int j = 0;j<31;j++)
           prefSum[i][j]=0;
       for(i=1;i<=n;i++)
       {
         int a;
         cin>>a;
         int cnt = 0;
         while(a>0)
         {
           prefSum[i][cnt]=a%2;
           a/=2;
           cnt++;
         }
       }
       for(i=1;i<=n;i++)
       {
         for(int j=0;j<31;j++)
           prefSum[i][j]+=prefSum[i-1][j];
       }
       cin>>q;
       while(q--)
       {
         int l,r;
         cin>>l>>r;
         double total=(r-l+1.0)/(2);
         long long x1 = 0,x2 = 0,x3 = 0;
         for(i=0;i<31;i++)
         {
           int p = prefSum[r][i]-prefSum[l-1][i];
           if(p<total)
             x1+=(1LL<<i);
           if(p!=(r-l+1))
             x2+=(1LL<<i);
           if(p)
             x3+=(1LL<<i);
         }
         long long ans = x1+x2+x3;
         cout<<ans<<"\n";
       }
   }
}