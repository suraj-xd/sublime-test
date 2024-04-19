#include <bits/stdc++.h>
using namespace std;
int repeatedNum(vector<int> &nums){ // for small array nums
    int slow = nums[0],fast = nums[0];
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow!=fast);
    fast = nums[0];
    while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for (size_t i = 0; i < n;i++) cin>>a[i];
    cout<<repeatedNum(a);

    
    map<int,int> mp; // using hashmap
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    } 
    for(int i=0;i<n;i++){
        if(mp[a[i]]!=1){
            cout<<a[i]<<" ";
        }
    } 
    
}