#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// inclusion and exclusion 

// greatest comman divisor of two numbers
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;   
}
// recursive method
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}