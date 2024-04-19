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
int minSwapsKsizeArr(vi a,int k){
    int n = a.size();
    if(k>n) return -1;
    int i = 0,j = n-1;
    int swaps = 0;
    while(i<j){
        if(a[i]>k) {
            swaps++;
            swap(a[i],a[j]);
            i++;j--;
        }else i++;
    }
    return swaps;
}
int32_t main(){
    speedo
    vi a = {2, 1, 5, 6, 3};
    int k = 3;
    cout<<minSwapsKsizeArr(a,k);
}

// Input : arr[ ] = {2, 7, 9, 5, 8, 7, 4} and K = 6 
// Output :  2 


// int minSwap(int *arr, int n, int k)
// {
//   int size = 0;
//   for (int i = 0; i < n; ++i) //  2, 1, 5, 6, 3 // 2
//   {
//     if (arr[i] <= k)
//       size++;
//   }

//   int ans = n, count = 0;
//   for (int i = 0; i < size; ++i)
//   {
//     if (arr[i] <= k)
//       count++;
//   }
//   ans = size - count;

//   for (int i = 1; i + size - 1 < n; ++i)
//   {
//     if (arr[i - 1] <= k)
//       count--;
//     if (arr[i + size - 1] <= k)
//       count++;
//     ans = min(ans, size - count);
//   }

//   return ans;
// }