#include <bits/stdc++.h>
using namespace std;
int searchInRoatatedArray(int arr[], int key, int left, int right){
    if(left>right){
        return -1;
    }

    int mid = (left+right)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[left]<=arr[mid]){
        if(key>=arr[left] && key<=arr[mid]){
            return searchInRoatatedArray(arr,key,left,mid-1);
        }
        return searchInRoatatedArray(arr,key,mid+1,right);
    }
    if(key>=arr[mid] && key<=arr[right]){
        return searchInRoatatedArray(arr, key,mid+1,right);
    }
    return searchInRoatatedArray(arr,key,left, mid-1);
}
int main(){
    // arr[] = {1,2,3,4,6,7,8,10};
    int arr[] = {4,6,7,8,10,1,2,3}; /* rotated array at pivot 10 */
    int n = 8;
    int key = 8;
    int a = searchInRoatatedArray(arr,key,0,n-1);
    if(a==-1){
        cout<<"Key doesn't exists\n";
    }else{
        cout<<"Key is at index: "<<a<<endl;
    }

}