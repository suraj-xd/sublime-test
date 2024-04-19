#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int NbaseX(int n,int base){
    int sum = 0;
    while(n>0){
        sum+=n%base;
        n/=base;
    }
    return sum;
}
int main(){
    cout<<NbaseX(100,2);
}