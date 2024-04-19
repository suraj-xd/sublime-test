#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
double multiply(double num,int n){
    double ans = 1.0;
    rep(i,1,n+1){
        ans = ans*num;
    }
    return ans;
}
double nthRootM(int n,int m){
    double lo = 1;
    double hi = m;
    double eps = 1e-6;
    while((hi-lo) > eps){
        double mid=  (lo+hi)/2.0;
        if(multiply(mid,n)<m){
            lo = mid;
        }else{
            hi = mid;
        }
    }
    return hi; // can return lo too
}
int main(){
    cout<<nthRootM(3,27);
}