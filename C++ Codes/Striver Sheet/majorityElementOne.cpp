#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// n/2 present element
int majorityElementOne(vi &nums){ // 3 1 3 3 2
    int elem = nums[0];
    int count = 1;

    int n = nums.size();
    rep(i,0,n){
        if(nums[i]==elem){
            count++;
        }else{
            if(count==0){
                elem = nums[i];
                count = 1;
            }else{
                count--;
            }
        }
    }
    return elem;
}
int main(){
    vi a = {3,1,3,3,2};
    cout<<majorityElementOne(a);
}