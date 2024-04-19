#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void fib(int num){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=num;i++){
        cout<<t1<<" ";
        nextterm = t1+t2;
        t1=t2;
        t2 = nextterm;

    }
    return;
} 
int main(){

    int n;
    cin>>n;
    fib(n);
    return 0;
}