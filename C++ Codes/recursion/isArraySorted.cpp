#include <bits/stdc++.h>
using namespace std;
int isArraySorted(int arr[], int n){
    if(n==1){
        return 1;
    }
    return (arr[n-1]<arr[n-2])?0:isArraySorted(arr,n-1);
}
int main(){
    int n = 5;
    int arr[n] = {5,4,3,2,1};
    cout<<isArraySorted(arr,n);
}