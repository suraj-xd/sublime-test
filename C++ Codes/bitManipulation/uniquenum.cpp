#include <iostream>
using namespace std;
//one unique num
// int unique(int arr[], int n){
//     int xorsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum^arr[i];
//     }
//     return xorsum;
// }


//two unique num
// int setBit(int n,int pos){
//     return ((n & (1<<pos))!=0);
// }
// void unique2(int arr[], int n){
//     int xorsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum^arr[i];
//     }
//     int tempxor = xorsum;
//     int setbit = 0;
//     int pos=0;
//     while(setbit!=1){
//         setbit = xorsum & 1;
//         pos++;
//         xorsum = xorsum>>1;
//     }
//     int newxor=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(setBit(arr[i],pos-1)){
//             newxor=newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor)<<endl;
// }


//one unique num in pair of 3

bool getBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int unique3(int arr[], int n){
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result = setBit(result,i);
        }
    }
    return result;
}


int main(){
    // int arr[] = {1,2,3,4,1,2,3};
    // cout<<unique(arr,7);

    // int arr[]= {1,2,3,1,2,3,5,7};
    // unique2(arr,8);

    // int arr[] = {1,2,3,1,2,3,1,2,3,4};
    // cout<<unique3(arr,10);
}

// unique character

char unique(int arr[], int n){
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return char(xorsum);
}
int main(){
    int arr[] = {'A','B','C','D','A','B','C'};
    cout<<unique(arr,7);
}