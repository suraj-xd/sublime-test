#include <iostream>
using namespace std;
int fact(int n){
    if (n<=1)
    {
        return 1;
    }else{
        return n * fact(n-1);
    }
}
int sum(int n){
    if (n==0)
    {
        return 1;
    }else{
        return n + sum(n-1);
    }
}
int power(int p,int n){
    if (n==0)
    {
        return 1;
    }else{
        int prevpower = power(p, n-1);
        return p*prevpower;
    }
}
int fib(int n){
    if(n==0||n==1){
        return n;
    }else{
        return fib(n-1) + fib(n-2);
    }
}
// reverse string
void reverse(string s){
    if(s.length()==0)
        return;
    string ros = s.substr(0);
    cout<<ros;
    
}
int main(){
    int p,n;
    cin>>n;
    // cin>>p;
    cout<<fib(n)<<endl;
    
}
