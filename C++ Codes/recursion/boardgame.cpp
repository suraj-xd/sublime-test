#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int  boardgame(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for (int i = 1; i <= 6; i++)
    {
        count += boardgame(s+i,e);
    }
    return count;
}
int main(){
    cout<<boardgame(0,3);
}