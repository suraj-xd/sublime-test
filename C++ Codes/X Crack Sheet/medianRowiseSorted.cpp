#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int median(vvi a,int r,int c){
    int Min = INT_MIN, Max  = INT_MAX;
    rep(i,0,r){
        if(a[i][0]<Min) Min = a[i][0];
        if(a[i][c-1]>Max) Max = a[i][c-1];
    }
    int desired = (r*c + 1) /2;
    while(Min < Max){
        int mid = (Min+Max)/2;
        int place =  0;
        rep(i,0,r){
            place += upper_bound(a[i].begin(),a[i].end(),mid)- a[i].begin();
        }
        if(place < desired) Min = mid+1;
        else Max = mid;
    }
    return Min;
}
signed main(){ 
    vvi a;
    a = {{1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}};
    int r = a.size();
    int c = a[0].size();
    cout<<median(a,r,c);    
}