#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void rotate(int arr[], int n)
{
  int elem = arr[n - 1];
  for (auto i = n; i >= 1; --i)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = elem;
}
int main(){
    // brute force
    int N = 5;
    int arr[] = {1, 2, 3, 4, 5};
    rep(i,0,N-1){
        swap(arr[i],arr[N-1]);
    }
    rep(i,0,N) {
        cout<<arr[i]<<" ";
    }
}