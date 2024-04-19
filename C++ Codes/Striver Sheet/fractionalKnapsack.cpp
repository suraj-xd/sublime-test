#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int N, W;
    cin>>N>>W;
    int values[N];
    int weight[N];
    rep(i,0,N) cin>>values[i];
    rep(i,0,N) cin>>weight[i];
    rep(i,0,N-1){
        if(values[i]/weight[i]<values[i+1]/weight[i+1]){
            swap(values[i],values[i+1]);
            swap(weight[i],weight[i+1]);
        }
    }
    int ans = 0;
    int i = 0;
    while(W >= weight[i++]){
        ans+=values[i];
        W-=weight[i];
    }
    int lw = weight[i]/values[i] * W;
    ans+= lw;
    cout<<ans;
}