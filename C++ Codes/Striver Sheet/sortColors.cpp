#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void sortColors(vector<int> &arr)
  {
    int i = 0, j = 0, k = arr.size() - 1;
    int n = arr.size();
    while (i < k && j <= k)
    {
        if (i < n && arr[i] == 0)
            i++;
        j = i;
        if (j > k)
            break;
        while (j < n && arr[j] == 1)
            j++;
        if (j > k)
            break;
        if (j < n && arr[j] == 0){
            swap(arr[i++], arr[j]);
        }
        else if(j < n && arr[j] == 2){
            swap(arr[j], arr[k--]);
        }
        
    }
  }
int main(){
    int n; cin>>n;
    vector<int> a(n);
    rep(i,0,n) cin>>a[i];
    sortColors(a);
    rep(i,0,n)cout<<a[i]<<" ";
}