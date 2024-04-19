// Given two arrays A and B of size N and an integer K. You have to select K indexes i1,i2,i3....iK such that 

// (A[i1]+A[i2]+A[i3]+……+A[iK]) / (B[i1]+B[i2]+B[i3]+……+B[iK]) is maximum.


#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   int testcases;
   cin>>testcases;
   while(testcases--){
       int n,k;
       cin>>n>>k;
       int arr[n],brr[n];
       for(int i=0;i<n;i++)
           cin>>arr[i];
       for(int i=0;i<n;i++)
           cin>>brr[i];
       ld low = 0.0, high = 1e8;
       ld ans = 0.0;
       while(abs(low-high)>1e-9){
           ld mid = (low+high)/2.0;
           priority_queue <ld, vector<ld>, greater<ld>> pq;
           for(int i=0;i<n;i++){
               pq.push(arr[i]-mid*brr[i]);
               if(pq.size()>k)
                   pq.pop();
           }
           ld s = 0.0;
           while(pq.size()){
               s+=pq.top();
               pq.pop();
           }
           if(s>=0.0)
               ans = mid,low = mid;
           else
               high = mid;
       }
       cout<<fixed<<setprecision(6)<<ans<<"\n";
   }
}