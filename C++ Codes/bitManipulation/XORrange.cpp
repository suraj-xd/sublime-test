#include <bits/stdc++.h>
using namespace std;
// find XOR from 1 to n
int findXOR(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
    return 0;
}
void DecimalToBinary(int n){
    while(n>0){
        if(n%2==0){
            cout<<0;
        }else{
            cout<<1;
        }
        n/=2;
    }
}
int main(){
    int L,R; cin>>L>>R;
    DecimalToBinary(findXOR(L)^findXOR(R));
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