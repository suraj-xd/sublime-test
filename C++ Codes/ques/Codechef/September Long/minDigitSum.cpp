#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int solve(int n,int base){
    int sum = 0;
    while(n > 0){
        sum = sum+n%base;
        n = n/base;
    }
    return sum;
}
int minBase(int n,int l,int r){ 
    int temp = 1e9, base = 0;
    if(r>=n && l<=n) return n;
    else if(r>n || l<n) return l or r;
    for(int i=r;i>=l;i--){
        if(r>=n && n%i==0) return i;
        int k = solve(n,i);
        if(k <= temp){
            temp = k;
            base = i;
        }
    }
    return base;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        cout<<minBase(n,l,r)<<endl;
    }
}