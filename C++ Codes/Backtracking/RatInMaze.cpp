#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// to pass function
bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1 && x>=0 && x>=0){
        return true;
    }
    return false;
}

// rat in maze
int dirs[4][4] = {
      {1, 0}, {0, -1}, {0, 1}, {-1, 0}};
bool RatInMaze(int** arr, int x, int y, int n, int** solArr){
    
    
    if(x==n-1 && y==n-1){
        solArr[x][y]= 1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        if(solArr[x][y]==1){
            return false;
        }
        solArr[x][y] = 1;
        
        if(RatInMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if( RatInMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        if(RatInMaze(arr,x-1,y,n,solArr)){
            return true;
        }
        if(RatInMaze(arr,x,y-1,n,solArr)){
            return true;
        }
        solArr[x][y] = 0;      // backtracking
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    // memory allocation
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[n];
    }

    // input maze
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    // memory allocation for solution array
    int** solArr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i]=new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    
    // getting output
    if(RatInMaze(arr,0,0,n,solArr)){
        for (int i = 0; i < n; i++)
        {
            for(int j=0; j< n; j++){
                cout<<solArr[i][j]<<" ";
            }cout<<endl;
        }   
    }
    
    
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

//  1 1 1 1 1
//  0 0 0 0 1
//  1 1 1 1 1
//  1 1 1 1 0
//  1 1 1 1 1