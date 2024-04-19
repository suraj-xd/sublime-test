#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;  
int main(){
    // matrix transporse
    int n;
    cin>>n;
    int arr[n][n];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0;j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    //matrix multiply


    // int n1,n2,n3;
    // cin>>n1>>n2>>n3;
    // int m1[n1][n2];
    // int m2[n2][n3];
    // for (size_t i = 0; i < n1; i++)
    // {
    //     for (size_t j = 0; j < n2; j++)
    //     {
    //         cin>>m1[i][j];
    //     }
        
    // }
    // for (size_t i = 0; i < n1; i++)
    // {
    //     for (size_t j = 0; j < n3; j++)
    //     {
    //         cin>>m2[i][j];
    //     }
        
    // }
    // int ans[n1][n3];
    // for (size_t i = 0; i < n1; i++)
    // {
    //     for (size_t j = 0; j < n3; j++)
    //     {
    //         ans[i][j] = 0;
    //     }
        
    // }
    
    // for (size_t i = 0; i < n1; i++)
    // {
    //     for (size_t j = 0; j < n3; j++)
    //     {
    //         for (size_t k = 0; k < n2; k++)
    //         {
    //             ans[i][j] += m1[i][k]*m2[k][j];
    //         }
            
    //     }
        
    // }
    // for (size_t i = 0; i < n1; i++)
    // {
    //     for (size_t j = 0; j < n3; j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    return 0;



    

    
    
}