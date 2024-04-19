#include <bits/stdc++.h>
using namespace std;
void reverse(string s,int n){
    if(n>0){
        cout<<s[n-1];
        reverse(s,n-1);
    }
}
int main(){
    int n=8;
    string s = "survangi";
    reverse(s,n);
}