// Description

// You are given two integers N and S. Find the number of positive integers X less than equal to N, such that the difference between X and the sum of its digits (in decimal representation) is not less than S.


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   ll testcases;
   cin>>testcases;
   while(testcases--){
       ll n,s;
       cin>>n>>s;
       ll low = 1,high = n;
       ll ans = 0;
       while(low<=high)
       {
           ll mid = (low+high)/2;
           ll temp = mid;
           ll sumOfDigit = 0;
           while(temp>0)
           {
               sumOfDigit+=temp%10;
               temp/=10;
           }
           if(mid-sumOfDigit>=s)
               high = mid-1;
           else
               ans=mid,low = mid+1;
       }
       cout<<n-ans<<"\n";
   }
}