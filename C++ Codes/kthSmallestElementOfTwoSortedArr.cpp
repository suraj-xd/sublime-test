#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int kthSmallestElementOfTwoSortedArr(vi &a,vi &b,int n,int m,int k){
    if(n>m){
        return kthSmallestElementOfTwoSortedArr(b,a,m,n,k);
    }
    int low = min(0,k-m), high = min(n,k);
    while(low<=high){
        int cut1 = (low+high)>>1;
        int cut2 = k-cut1;
        int l1 = (cut1==0) ? INT_MIN : a[cut1-1];
        int l2 = (cut2==0) ? INT_MIN : b[cut2-1];
        int r1 = (cut1==n) ? INT_MAX : a[cut1];
        int r2 = (cut2==m) ? INT_MAX : b[cut2];

        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }else if(l1 < r2){
            high = cut1-1;
        }else{
            low = cut1+1;
        }
    }
    return 1;
}
int main(){
    vi a = {2,3,4,9};
    vi b = {4,7,8,20,33};
    int ans = kthSmallestElementOfTwoSortedArr(a,b,a.size(),b.size(),6);
    cout<<ans;
}