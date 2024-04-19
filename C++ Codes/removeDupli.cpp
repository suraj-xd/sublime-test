#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]  ={4,3,7,2,4,3,2,1,7,1};
    int i,j,k,temp,n=10;
    for (i = 0; i < n; i++)
    {
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for (k = j; i < n; i++)
                {
                    arr[k] = arr[k+1];
                    j--;
                    n--;
                }
                
            }
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}