#include <bits/stdc++.h>
using namespace std;
// time-complexity = lesser than O(n);
int findPeakElement(int arr[], int low, int high, int n){
    int mid = low+(high-low)/2;
    
    if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])){
        return mid;
    }

    else if(mid>0 && arr[mid-1]>arr[mid]){
        return findPeakElement(arr,low,mid-1,n);
    }else{
        return findPeakElement(arr,mid+1,high,n);
    }
}
int main(){
    int arr[] = {0,6,8,5,7,9};
    int n = 6;
    cout<<"Peak Element is at index: "<<findPeakElement(arr,0,n-1,n)<<endl;
}

// normal method

// int main(){
//     int arr[] = {2,4,6,7,3,6,2,11,10,33,2};
//     int n = sizeof(arr)/4;
//     for (size_t i = 1; i <= n; i++)
//     {
//         if(arr[i-1]<=arr[i] && arr[i]<=arr[i+1]){
//             cout<<arr[i]<<" "<<endl;
//         }
//     }
// }