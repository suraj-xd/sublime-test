// Description

// Given a bitonic array A consisting of N integers and an integer Q. In each query, you will be given an integer K, find the positions of K in A. Integer K exists in A.

// Bitonic array - A bitonic sequence is a sequence with A[1]<A[2]<A[3]....A[k]>A[k+1]>A[k+2]....>A[N] for some 1<=K≤N. 


#include<bits/stdc++.h>
using namespace std;

int n,q;
vector<int> arr;

bool check(int i){
   if(arr[i]>arr[i-1])return 1;
   else return 0;
}

void solve(){
   cin>>n>>q;
   arr.resize(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   int lo = 1;
   int hi = n-1;
   int peak = 0;
   while(lo<=hi){
       int mid = (lo+hi)/2;
       if(check(mid)){
           peak = mid;
           lo = mid + 1;
       }else{
           hi = mid - 1;
       }
   }

   while(q--){
       int k;
       cin>>k;

       vector<int> final;
       lo = 0;
       hi = peak-1;
       while(lo<=hi){
           int mid = (lo+hi)/2;
           if(arr[mid]==k){
               final.push_back(mid+1);
               break;
           }else if(arr[mid]>k){
               hi=mid-1;
           }else{
               lo=mid+1;
           }
       }

       lo = peak;
       hi = n-1;
       while(lo<=hi){
           int mid = (lo+hi)/2;
           if(arr[mid]==k){
               final.push_back(mid+1);
               break;
           }else if(arr[mid]>k){
               lo=mid+1;
           }else{
               hi=mid-1;
           }
       }

       for(auto v:final){
           cout<<v<<" ";
       }  
       cout<<endl;
   }
}

signed main(){
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   int _t;cin>>_t;while(_t--)
   solve();
}