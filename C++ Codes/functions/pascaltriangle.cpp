#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int fact(int n){
    int fact = 1;
    for (size_t i = 2; i <= n;  i++)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    
}