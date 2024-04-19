#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int nextGap(int gap)
{
  if (gap <= 1)
    return 0;
  return (gap / 2) + (gap % 2);
}

void merge(int arr1[], int arr2[], int n, int m)
{
  int i,j,gap =n+m;
  for(gap = nextGap(gap);gap>0;gap = nextGap(gap)){
      for(i = 0;i+gap<n;i++){
          if(arr1[i]>arr1[i+gap]){
              swap(arr1[i],arr1[i+gap]);
          }
      }
      for(j = gap > n ? gap-n : 0;i<n && j<m; i++,j++){
          if(arr1[i]>arr2[j]){
              swap(arr1[i],arr2[j]);
          }
      }
      if(j<m){
        for(j = 0;j+gap<n;j++){
            if(arr2[j]>arr2[j+gap]){
                swap(arr1[j],arr1[j+gap]);
            }
        }
      }
  }
}
int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    merge(arr1,arr2,4,5);
    rep(i,0,4) cout<<arr1[i]<<" ";
    rep(i,0,5) cout<<arr2[i]<<" ";
}