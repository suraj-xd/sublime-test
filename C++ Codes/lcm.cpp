#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a,b,lcm;
    cin>>a>>b;
    // iterative method to find LCM
    if(a>0) lcm = a;
    else lcm = b;
    while(1){
        if(lcm%a==0 && lcm%b==0){
            cout<<lcm;
            break;
        }
        lcm++;
    }
    // another method to find LCM
    cout<<(a*b)/gcd(a,b);
}