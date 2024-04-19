#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {4,-4,1,-3,1,-3};
    int potion = 0;
    int currhealth = 0;
    int health = 0;
    for(int i=0;i<n;i++){
        currhealth+=arr[i];
        if(currhealth==0 && i==n-1){
            potion++;
        }
        if(currhealth>0){
            cout<<currhealth<<" ";
            potion++;
        }else{
            currhealth-=arr[i];
        }
    } 
    cout<<endl<<potion<<endl;
}
// 5