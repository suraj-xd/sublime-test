#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int searchfor(vi a,int target){
    int i = 0, j = a.size()-1;
    int n = a.size();

    while(i<=j){
        int mid = (i+j)/2;
        if(a[mid]==target){
            return mid;
        }
        if(a[i]<=a[mid]){
            if(a[i]<=target && a[mid]>=target){
                j = mid-1;
            }else{
                i = mid+1;
            }
        }else{
            if(a[i]>=a[mid] && a[mid]<=target){
                i = mid+1;
            }else{
                j = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    
}