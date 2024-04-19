#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class KthLargest{
    public:
    priority_queue<int,vi,greater<int>> pq;
    int k;
    KthLargest(int k,vi &nums){
        this->k = k;
        rep(i,0,nums.size()){
            if(pq.size()<k){
                pq.push(nums[i]);
            }else{
                if(pq.top() < nums[i]){
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
    }
    int add(int num){
        if(pq.size() < k){
            pq.push(num);
        }else{
            if(pq.top()<num){
                pq.pop();
                pq.push(num);
            }
        }
        return pq.top();
    }
};
int main(){
    
}