#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    // brute force
    int n; cin>>n;
    int arr[n];
    rep(i,0,n) cin>>arr[i];
    priority_queue<int,vi,greater<int>> pq;

    rep(i,0,n){
        if(arr[i]>0){
            pq.push(arr[i]);
        }
    }
    rep(i,1,n){
        if(pq.top()!=i){
            cout<<i<<endl;
            break;
        }
        pq.pop();
    }

    // optimized

    // int n; cin>>n;
    // int arr[n];
    // rep(i,0,n) cin>>arr[i];
    // bool check[n] = {false};
    // rep(i,0,n){
    //     if(arr[i]>=0){
    //         check[arr[i]]=true;
    //     }
    // }

    // rep(i,1,n){
    //     if(check[i]==false){
    //         cout<<i;
    //         break;
    //     }
    // }

}