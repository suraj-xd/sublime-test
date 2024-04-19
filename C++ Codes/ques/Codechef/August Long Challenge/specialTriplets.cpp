#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool check(int a,int b, int c){
    return ((a%b==c) && (b%c==0));
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<3) continue;
        long long cnt = 0;
        rep(i,1,n+1){
            rep(j,1,n+1){
                rep(k,1,n+1){
                    if(i==j==k) continue;
                    if(check(i,j,k)) cnt++;
                }
            }
        }
        cout<<cnt<<endl;;
    }
}