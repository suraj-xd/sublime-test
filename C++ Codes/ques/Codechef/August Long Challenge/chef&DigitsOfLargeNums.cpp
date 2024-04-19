#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e5+2;
vi dp(N,-1);
int factorial(int n){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    dp[n] = n*factorial(n-1);
    return dp[n];
}
bool check(int a){
    if(a==0) return 1;
    int cnt = 0;
    int ans = 1;
    while(a!=0){
        cnt++;
        ans*=(a%10);
        a/=10;
    }
    int fact = factorial(cnt);
    return fact<=ans;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int cnt  = 1;
        if(n<=1){
            cout<<"0"<<endl;
            continue;
        }
        rep(i,1,n){
            if(check(i)) cnt++;
        }
        cout<<cnt<<endl;
    }
}
    // 13
    // 0
    // 10
    // 11


    // 54- 48
    // 0
    // 10 11 20 21 30 40 50
    // write a function to check- its product and and if smaller or grater than number of integers
    
    
    
    // 4
    // A C L R
    // 5 1 1 5
    // 4 4 2 5
    // 2 2 2 5
    // 3 3 2 5


    // 4
    // A C L R
    // 5 1 2 5 
    // 4 4 2 5
    // 2 2 2 5
    // 3 3 2 5