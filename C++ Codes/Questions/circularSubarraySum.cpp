#include <iostream>
using namespace std;
int circularSubarraySum(int arr[], int num){
    int sum = 0;
    int cursum= 0;
    if(arr[0]>arr[num-1]){
        sum+=arr[0];
        cursum = sum;
        for (size_t i = num-1; i >= 1; i--)
        {
            cursum+=arr[i];
            if(cursum>sum){
                sum = cursum;
            }
        }
    }else{
        sum+=arr[num-1];
        cursum = sum;
        for (size_t i = 0; i <= num-2; i++)
        {
            cursum+=arr[i];
            if(cursum>sum){
                sum = cursum;
            }
        }
    }
    return sum;
}
int main(){
    
}