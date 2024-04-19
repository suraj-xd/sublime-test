#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        vector<pair<int,int>> a(n);
        // first will stay
        // second want to use the charger
        rep(i,0,n){
            cin>>a[i].first;
        }
        rep(i,0,n){
            cin>>a[i].second;
        }
        int time = 0;
        // sort(a.begin(),a.end()); index will be distorted
        rep(i,0,n){
            if(a[i].second>=a[i].first){
                cout<<i+1<<" " <<time<<" ";
                time+=a[i].first;
                cout<<time<<endl;
            }
        }
        if(!time) cout<<time<<endl;
    }
}

// input:
// 1
// 5
// 36 40 49 19 37
// 18 11 48 15 33


// output: 0