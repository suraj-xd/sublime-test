#include <iostream>
using namespace std;
// sliding window approach

void maxSubarraySum(int arr[], int n, int k, int x){
    int sum=0, ans = 0;
    for (size_t i = 0; i < k; i++)
    {
        sum+=arr[i];
    }
    if(sum<ans){
        ans=sum;
    }
    for (size_t i = k; i < n; i++)
    {
        sum = sum-arr[i-k];
        sum = sum+arr[i];
        if(sum<x){
            ans=  max(ans,sum);
        }
    }
    cout<<"Max sub array sum is : "<<ans<<endl;
    
    
}
int main(){
    int arr[] = {1,5,6,7,2,5};
    int n = 6;
    int k = 3;
    int x = 20;
    maxSubarraySum(arr,n,k,x);
}