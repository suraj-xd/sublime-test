#include <bits/stdc++.h>
using namespace std;
// dont care if array is sorted or unsorted;
int main(){
    int n; cin>>n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int secondLarg = 0,largest = 0;
    for (size_t i = 0; i < n; i++)
    {   
        if(arr[i]>largest){
            secondLarg = largest;
            largest=arr[i];
        }
        if(arr[i]<largest && arr[i]>secondLarg){
            secondLarg = arr[i];
        }
    }
    cout<<"Second Largest Numbers is: "<<secondLarg<<endl;
}