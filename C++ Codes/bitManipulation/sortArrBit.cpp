#include <iostream>
using namespace std;
int NoofSetbits(int n){
    int count=0;
    while(n){
        n = n &(n-1);
        count++;
    }return count;

}
// sort the array according to the number of bits;
int main(){
    int arr[] = {2,4,3,7,5}; // 10 // 100 // 11 // 111 // 101
    for(int i=0;i<=5;i++){
        if(arr[i]<NoofSetbits(arr[i])){
            arr[i+1] = arr[i];
        }
    }
    for (size_t i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}