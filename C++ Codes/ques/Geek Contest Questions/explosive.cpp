#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 6;
    int k = 2; // two color of boxes are there
    int c = 2; // 2 boxes of same color
    int arr[] = {1,1,2,2,1,1};
    int temparr[10];
    int a=0,b=0;
    int colorcount = k;
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i]==1){
            temparr[i]=arr[i];
            a = 1;
        }else if(arr[i]==0){
            temparr[i]=arr[i];
            b = 1;
        }

        if(a==b){
            temparr[i+1]=0;
        }

    }
}