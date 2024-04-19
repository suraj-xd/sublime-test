#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int **ptr = new int*[n];
    for (size_t i = 0; i < n; i++)
    {
        ptr[i] = new int[n];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin>>ptr[i][j];
        }
        
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    delete []ptr;
    ptr=NULL;
    
    
    
}