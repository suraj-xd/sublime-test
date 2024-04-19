// undone
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m,0));
    rep(i,0,n){
        rep(j,0,m){
            cin>>a[i][j];
        }
    }

    bool upDiagonal = false;
    rep(i,0,n){
        rep(j,0,m){
            if(i==j){
                upDiagonal = true;
            }

            if(upDiagonal){
                if(a[i][j]<a[i+1][j+1]){
                    swap(a[i][j],a[i+1][j+1]);
                }
            }else{
                if(a[i][j]>a[i+1][j+1]){
                    swap(a[i][j],a[i+1][j+1]);
                }
            }
        }
        upDiagonal = false;
    }
    rep(i,0,n){
        rep(j,0,m){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
