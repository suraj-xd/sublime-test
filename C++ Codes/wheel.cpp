#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main(){
    int n; cin>>n;
    if(n%2==1){
        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j]= '*';
            }
            
        }
        Sleep(500);
        cout<<"delay done";
    }
    else{
        cout<<"enter an odd number"<<endl;
    }
}