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

    //bubble sort
    // int counter = 1;
    // while(counter<n){
    //     for (size_t i = 0; i < n-counter; i++)
    //     {
    //         int temp = arr[i];
    //         arr[i] = arr[i+1];
    //         arr[i+1] = temp;
    //     }
    //     counter++;
    // }


    //suraj bubble sort
    int counter = 1;
     for (size_t j = 0; j < n; j++)
     { 
        for (size_t i = 0; i < n-counter; i++)
        {
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    //print array
    for (size_t i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}