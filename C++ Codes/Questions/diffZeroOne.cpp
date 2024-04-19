#include <iostream>
using namespace std;
// difference ones in subaray of zeros;
int main(){
    int arr[] = {1,1,0,0,0};
    int n = sizeof(arr)/4;
    int a = 0,b=0;
    for(int i=0; i<n; i++){
        if(!a && arr[i]==0){
            a = i;
        }
        if(!b && arr[n-i]==0){
            b = n-i;
        }
        if(a && b){
            break;
        }
    }
    int zeros = 0;
    int ones = 0;
    for(int i=a;i<=b;i++){
        if(arr[i]==0){
            zeros++;
        }else{
            ones++;
        }
    }

    cout<<zeros-ones;
    return 0;
}



// difference ones in subaray of zeros;

// using Kaden's algorithm 
// time complexity is O(n);

// int main(){
//     int arr[] = {1,1,0,0,0};
//     int n = sizeof(arr)/4;
//     int maxSum = 0,curSum=0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==0){
//             arr[i]=1;
//         }else{
//             arr[i] = -1;
//         }
//         curSum=curSum+arr[i];
//         if(curSum>maxSum){
//             maxSum=curSum;
//         }
//         if(curSum<0){
//             curSum=0;
//         }
//     }
//     cout<<maxSum;
//     return 0;
// }