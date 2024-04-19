#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int removeDuplicate(vi &nums){
    int n = nums.size();
    int i  = 1, j = 1;
    int prev = nums[0];
    while(j < n){
        while(j<n && prev==nums[j]){
            j++;
        }
        if(j<n){
            prev = nums[j];
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
    }
    return i;
}
int main(){
    vi a = {1,1,2,3,4,4,5,5};
    cout<<removeDuplicate(a);
}

// output: 5