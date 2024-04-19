#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//getbit
int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

//setbit
int setBit(int n, int pos){
    return (n | (1<<pos));
}

//clearbit
int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}
//updatebit
int updatebit(int n,int pos,int value){
    n = clearBit(n,pos);
    return n | value<<pos;
}
int main(){
   
    
}