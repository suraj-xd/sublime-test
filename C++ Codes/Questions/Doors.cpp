#include <bits/stdc++.h>
using namespace std;
// 100 students
// 100 doors
// all are closed / 1st opens 2ns's multiple close 3rd's multiple opens and so on
int main(){
    int n = 50;
    int arr[n] = {0};
    int arr1[n] = {0};

    for (size_t i = 1; i <= n; i++)
    {
        for(int j=i;j<=n;j+=i){
            if(j%2==0){
                arr[j]=0;
            }else{
                arr[j]=1;
            }
        }
    }

    for (size_t i = 1; i <= n; i+=2)
    {
        arr1[i]=1;
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (size_t i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    
    
}