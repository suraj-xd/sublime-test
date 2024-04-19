#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int countPairs(int a[],int n,int k){
    map<int,int> freq;
    rep(i,0,n){
        freq[a[i]]++;
    }
    int ans = 0;
    rep(i,0,n){
        ans += freq[k-a[i]];
        if(k==2*a[i]){
            ans--;
        }
    }
    return ans/2;
}
int main(){
    int N = 4, K = 6;
    int arr[] = {1, 5, 7, 1};
    int ans = countPairs(arr,N,K);
    cout<<ans;
}
// output: 2