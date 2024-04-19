#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// dnf sort

// check between 0(low),1(mid),2(high)
// making pointer and increasing and decreasing them for another iteration
void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void dnfSort(int arr[], int n){
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr,mid,high);
            high--;
        }
    }
}
int main(){
    int arr[] = {1,0,2,2,1,0,1,1};
    dnfSort(arr,8);
    for (size_t i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}