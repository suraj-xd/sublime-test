#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// first occurence
int firstocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr, n, i+1, key);
}

// last occurence
int lastocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray = lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
// main function
int main(){
    int arr[7] = {2,3,3,5,6,4,3};
    cout<<firstocc(arr,7,0,3)<<endl;   
    cout<<lastocc(arr,7,0,3)<<endl; 
}