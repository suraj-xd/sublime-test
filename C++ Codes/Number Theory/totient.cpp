#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e5+2;
int totient[N];
int main(){
    rep(i,0,N){
        totient[i] = i;
    }

    rep(i,2,N){
        if(totient[i]==i){
            for(int j=2*i;j<N;j+=i){
                totient[j] *= (i-1);
                totient[j] /= i;
            }
            totient[i] = i-1;
        }
    }

    rep(i,2,11){
        cout<<totient[i]<<" ";
    }
}

// output: 1 2 2 4 2 6 4 6 4 