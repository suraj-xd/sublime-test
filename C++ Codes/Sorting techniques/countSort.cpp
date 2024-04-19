#include <bits/stdc++.h>
using namespace std;

// count sort
// first get an count array of numbers occuring with index
//then make an array of summing i & i+1;
// now make an output array where decrement the counter and place value of arr[i];

void countSort(int arr[], int n){
    int k = arr[0];
    for (size_t i = 0; i < n; i++)
    {
        k = max(k,arr[i]);
    }
    int count[10] = {0};
    for (size_t i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (size_t i = 1; i <=k; i++)
    {
        count[i]+= count[i-1];
    }
    int output[n];
    for (size_t i =n-1; i>=0; i--)
    { 
        output[--count[arr[i]]] = arr[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    
    
    
}
int main(){
    int arr[] = {1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
    for (size_t i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    

    
}