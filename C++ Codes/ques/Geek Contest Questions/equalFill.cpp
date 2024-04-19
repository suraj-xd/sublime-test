#include <bits/stdc++.h>
using namespace std;
void equalFill(int arr[], int n,int m){
    vector<int> tempArr(n);
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {  
        sum+=arr[i];
    }
    int data = (sum+m)/n;
    for (size_t i = 0; i < n; i++)
    {   
        float ans = data-arr[i];
        printf("%.6f ",ans);
    }      
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int m = 50;
    equalFill(arr,n,m);
    // vector<int> ans;
    // ans  = equalFill(arr,n,m);
    // for (size_t i = 0; i < ans.size(); i++)
    // {
    //     printf("%.6f ", ans[i]);
    // }
}