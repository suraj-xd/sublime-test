#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void number(int num){
    if(num<100){
        cout<<num<<" ";
        // num++;
        number(num+1);  
    }
}
int main(){
    number(1);
}