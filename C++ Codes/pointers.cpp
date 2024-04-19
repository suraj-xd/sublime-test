#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;  
int sum(int *b){
    return *b;
}
int main(){
    int a = 10;
    int *p;
    cout<<*p<<endl;
    cout<<p<<endl;
    p = &a;
    cout<<*p<<endl;
    cout<<sum(p);
}