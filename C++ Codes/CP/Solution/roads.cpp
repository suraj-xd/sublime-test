#include <bits/stdc++.h>
using namespace std;
int roads(int n, int arr[]){
    int ans=1;
    for (size_t i = 0; i < n-1; i++)
    {
        ans*=arr[i];
    }
    return ans;
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n-1];
        for (size_t i = 0; i < n-1; i++)
        {
            cin>>arr[i];
        }
        cout<<roads(n,arr);
    }
    
}