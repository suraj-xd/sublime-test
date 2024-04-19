#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int countSmallerThanEqaulMid(vi &row,int mid){
    int l = 0, hi = row.size()-1;
    while(l<=hi){
        int md = (l+hi)>>1;
        if(row[md]<=mid) l = md+1;
        else hi = md-1;
    }
    return l;
}
int medianRowWiseSortedMatrix(vvi &matrix){
    int n= matrix.size();
    int m = matrix[0].size();
    int lo = 1, hi = 1e9;
    while(lo<=hi){
        int mid = (lo+hi)>>1;
        int cnt= 0;
        rep(i,0,n){
            cnt+= countSmallerThanEqaulMid(matrix[i],mid);
        }
        if(cnt<=(n+m)/2) lo = mid+1;
        else hi = mid-1;
    }
    return lo;
}
int main(){
    vvi a(3,vi(3));
    a = {{1, 3, 5},{2, 6, 9},{3, 6, 9}};
    int ans = medianRowWiseSortedMatrix(a);
    cout<<ans;
}