#include <bits/stdc++.h>
using namespace std;
int findFeasable(int boards[], int n, int limit){
    int sum = 0, painters =1;
    for(int i=0; i<n;i++){
        sum+=boards[i];
        if(sum>limit){
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}
int painterPartition(int boards[], int n, int m){
    int totalLenght = 0, k = 0;
    for(int i=0; i<n;i++){
        k = max(k,boards[i]);
        totalLenght+=boards[i];
    }

    int low=k,high=totalLenght;
    while(low<high){
        int mid = (low+high)/2;
        int painters = findFeasable(boards,n,mid);

        if(painters<=m){
            high = mid;
        }else{
            low = mid-1;
        }
    }

    return low;
}
int main(){
    int boards[] = {10,20,30,40};
    int n = 4;
    int m = 2;
    cout<<"Min no of painters: "<<painterPartition(boards,n,m)<<endl;   
}