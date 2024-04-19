#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // char arr[100] = "apple";
    // int i = 0;
    // while(arr[i]!='\0'){
    //     cout<<arr[i]<<endl;
    //     i++;
    // }

    // char arr[100];
    // cin>>arr;
    // cout<<arr;



    //Q- if it is a palindrome or not

    // int n; cin>>n; char arr[n+1]; cin>>arr; bool check = 1;
    // for (size_t i = 0; i < n; i++)
    // {
    //     if(arr[i]!=arr[n-1-i]){
    //         check = 0;
    //         break;
    //     }
    // }
    // if(check == true){
    //     cout<<"it is a palindrome"<<endl;
    // }else{
    //     cout<<"it is not a palindrome"<<endl;
    // }



    // max length of a sentence

    int n; 
    cin>>n; 
    cin.ignore(); 
    char arr[n+1]; 
    cin.getline(arr,n);
    cin.ignore();
    int i = 0;
    int curlen = 0, maxlen = 0;
    int st=0, maxst=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(curlen > maxlen){
                maxlen = curlen;
                maxst = st;
            }
            curlen=0;
            st = i+1;
        }else
        {
            curlen++;
        }
        

        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for (size_t i = 0; i < maxlen; i++)
    {
        cout<<arr[maxst+i];
    }

    return 0;
}