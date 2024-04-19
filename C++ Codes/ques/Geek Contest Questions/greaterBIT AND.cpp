#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 4;
    int arr[] = {6,2,5,3};

    for(int i =0;i<n;i++){
        for (size_t j = i; j < n; j++)
        {
            if((arr[i]&arr[j])>(arr[i]^arr[j]) && arr[i]!=arr[j]){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}