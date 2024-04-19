#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int partition(vi &nums,int left,int right){
    int pivot  = nums[left],l = left+1,r = right;
    while(l<=r){
        if(nums[l]>pivot && nums[r]<pivot){
            swap(nums[l++],nums[r--]);
        }
        if(nums[l]<=pivot){
            l++;
        }
        if(nums[r]>=pivot){
            r--;
        }        
    }
    swap(nums[left],nums[r]);
    return r;
}
int quickSelect(vi nums,int k,int lo,int hi){
    while(lo<=hi){
        int pos = partition(nums,lo,hi);
        if(pos==k){
            return nums[pos];
        }else if(pos>k){
            hi = pos-1;
        }else{
            lo = pos+1;
        }
    }
    return INT_MIN;
}
int KthSmallestElement(vi nums,int k){
    return quickSelect(nums,k-1,0,nums.size()-1);
}
int main(){
    vi nums = {6,4,3,8,5,2};
    cout<<KthSmallestElement(nums,4);
}
// 2 3 6 7 8