#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;  
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (size_t i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}