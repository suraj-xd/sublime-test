#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int arraysProduct(vi a, vi b, int i, int j){
    int sum1 = 0,sum2 = 0;
    rep(k,0,i) sum1+=a[k];
    rep(k,0,j) sum2+=b[k];
    return (sum1*sum2);
}
int main(){
    int i,j;
    cin>>i>>j;
    vi a(i),b(j);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    cout<<arraysProduct(a,b,i,j);
}