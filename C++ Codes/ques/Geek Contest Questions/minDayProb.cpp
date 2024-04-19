#include <bits/stdc++.h>
using namespace std;
int minDayProb(int n){
    int operations=0;
    while(n!=0)
    {
        int num = max(n/10,n%10);
        operations++;
        n = n-num;
    }
    return operations;
}
int main(){
    int n; cin>>n;
    cout<<minDayProb(n);
}