#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++){
int perfectSquares(int N){
    N = sqrtl(N);
    return N-1;
}
int main(){
    cout<<perfectSquares(9);
    cout<<"\n"<<perfectSquares(16);
}
// output: 2 -> 1 4
//         3 -> 1 4 9