#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
bool isPossible(int arr[],int n,int m,int min){
    int student = 1, sum = 0;
    rep(i,0,n){
        if(arr[i]>min){
            return false;
        }
        if(sum+arr[i]>min){
            student++;
            sum = arr[i];
            if(student>m){
                return false;
            }
        }else{
            sum+=arr[i];
        }
    }
    return true;
}
int minimumAlocatedPages(int arr[],int n,int m){
    if(n<m) return -1;
    int sum = 0;
    rep(i,0,n){
        sum = sum + arr[i];
    }
    int low = 0,high = sum,ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(isPossible(arr,n,m,mid)){
            ans = min(ans,mid);
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[] = {12,34,67,90};
    int n=4;
    int m  = 2;
    cout<<"The min no of pages allocated: "<<minimumAlocatedPages(arr,n,m)<<endl;
}