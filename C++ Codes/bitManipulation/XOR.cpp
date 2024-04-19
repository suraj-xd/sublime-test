#include <bits/stdc++.h>
using namespace std;
// find XOR from 1 to n
int main(){
    int n; cin>>n;
    if(n%4==0) cout<<n;
    if(n%4==1) cout<<1;
    if(n%4==2) cout<<n+1;
    if(n%4==3) cout<<0;
}
// 1 = 1
// 2 = 3
// 3 = 0
// 4 = 4
// 5 = 1
// 6 = 7
// 7 = 0
// 8 = 8
// 9 = 1