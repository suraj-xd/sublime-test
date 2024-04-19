#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// fibonacci using matrix exponentiation 
// == (matrix multiplication and binary exponentiation)
// function to multiply matrices
vvi multiply(vvi &a, vvi &b){
    int n = a.size();
    vvi ans(n,vi(n,0));
    rep(i,0,n){
        rep(j,0,n){
            rep(k,0,n){
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return ans;
}
// function to exponentiate
vvi maxtrixExponentiate(vvi &a, int n){
    if(n==0){
        int sz = a.size();
        vvi a(sz,vi(sz,0));
        a[0][0]  = a[1][0] = a[0][1] = 0;
        a[1][1] = 1;
        return a;
    }

    if(n==1){
        return a;
    }

    vvi temp = maxtrixExponentiate(a,n/2);
    vvi ans = multiply(temp,temp);

    if(n&1){
        ans = multiply(temp,ans);
    }

    return ans;
}
int main(){
    int n; cin>>n;
    vvi a= {{1,1},{1,0}};
    vvi ans = maxtrixExponentiate(a,n);
    int sz = ans.size();

    rep(i,0,sz){
        rep(j,0,sz){
            cout<<ans[i][j]<< " ";
        }cout<<endl;
    }

    cout<<endl;

    cout<<"Fib of N is "<<ans[0][1];
}

// input: 4

// output: 5 3 
//         3 2 

// Fib of N is 3