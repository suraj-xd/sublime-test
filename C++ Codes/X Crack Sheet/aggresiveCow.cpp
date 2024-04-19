#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool canKeep(int arr[],int n,int c,int gap){
    int count = 1;
    int last_cow = arr[0];
    rep(i,1,n){
        if(arr[i]-last_cow>gap){
            last_cow = arr[i];
            count++;
            if(count==c){
                return true;
            }
        }
    }
    return false;
}
int aggresiveCow(int arr[],int n,int c){
    if(n<c) return -1;
    int sum = 0;
    rep(i,0,n){
        sum = sum+arr[i];
    }
    sort(arr,arr+n);
    int low = 0,high = sum, ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(canKeep(arr,n,c,mid)){
            ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    int n = 5;
    int arr[] = {1,2,8,4,9};
    int cow = 3;
    aggresiveCow(arr,n,cow);

}
// output: 3