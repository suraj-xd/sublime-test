#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int i,int j){
    // make it recursive
    if(i > j){
        return 0;
    }
    int ans = arr[i];
    return ans + sum(arr,i+1,j);
}

void reverseString(string &s,int i,int j){
    if(i > j) return;
    swap(s[i],s[j]);
    reverseString(i+1,j-1);
}
signed main() {   

    int n; cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++) cin >> arr[i];
    int target = 0;
    cin >> target;

    subarraySum(arr,n,target);
    

}