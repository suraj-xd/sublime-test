#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int singleNonDuplicate(vi &nums){
    int n = nums.size();
    int i = 0, j = n-1;
    if(j==0) return nums[j];
    if(nums[0]!=nums[1]) return nums[0];
    else if(nums[n-2]!=nums[n-1]) return nums[n-2];

    while(i <= j){
        int mid = j - (j-i)/2;
        if(mid > 0 && mid < n-1){
            if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid]){
                return nums[mid];
            }

            if(nums[mid-1]==nums[mid]){
                if((mid-1%2)==0){
                    i = mid+1;
                }else{
                    j = mid-1;
                }
            }else{
                if((mid)%2==0){
                    i = mid+1;
                }else{
                    j = mid-1;
                }
            }
        }else{
            break;
        }
    }
    cout<<i<<endl;
    return nums[i];
}
int main(){
    vi a = {1,1,2,2,4,5,5,6,6};
    cout<<singleNonDuplicate(a);

    // output: 4
}