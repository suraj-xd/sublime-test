#include <bits/stdc++.h>
using namespace std; 
int main(){
    int a;
    cin>>a;
    if(a==1 || a==2 || a==3){
        cout<<a;
    }else{
        for (size_t i = 2; i < INT_MAX; i++)
        {
            if(a%i!=0 && a%2!=0 && a%3!=0){
                cout<<a;
                break;
            }
            a++;
        }
    }
}
// output: 4            