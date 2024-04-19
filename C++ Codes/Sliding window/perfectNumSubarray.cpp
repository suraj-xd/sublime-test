#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectNum(int n){
    int sum = 1;
    for (size_t i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            if(i==n/i){
                sum+=i;
            }else{
                sum+=i + n/i;
            }
        }

    }
    if(sum==n && n!=1){
        return true;
    }
    return false;
    
}
int maxSum(int arr[], int n, int k){
    if(n<k){
        cout<<"Invalid values";
        return -1;
    }

    int res = 0;
    for (size_t i = 0; i < k; i++)
    {
        res+=arr[i];
    }
    int sum = res;
    for (size_t j = k; j < n; j++)
    {
        sum+=arr[j]-arr[j-k];
        res  = max(res,sum);
    }

    return res;
}
int maxPerfectNumbers(int arr[],int n, int k){
    for (size_t i = 0; i < n; i++)
    {
        if(isPerfectNum(arr[i])){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }
    }

    return maxSum(arr,n,k);
}
// perfect number // 6 (1,2,3) divisors are sum;
int main(){
    int arr[] = {28,2,3,6,496,99,8128,24};
    int n = 8;
    int k  =4;
    cout<<maxPerfectNumbers(arr,n,k);    
}