#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
        }
    }
    cout<<arr[n];
    
    
    return 0;
}