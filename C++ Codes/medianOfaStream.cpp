#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
priority_queue<int> max_pq;
priority_queue<int,vi,greater<int>> min_pq;
void balanceHeap(){
    if(max_pq.size() > min_pq.size() +1){
        min_pq.push(max_pq.top());
        max_pq.pop();
    }
    if (max_pq.size() && min_pq.size() && max_pq.top() > min_pq.top())
  {
    min_pq.push(max_pq.top());
    max_pq.pop();
  }

  if (min_pq.size() > max_pq.size())
  {
    max_pq.push(min_pq.top());
    min_pq.pop();
  }
}
void insertHeap(int &x){
    max_pq.push(x);
    balanceHeap();
}
double getMedian(){
    if(max_pq.size()>min_pq.size()){
        return max_pq.top();
    }else{
        return (max_pq.top()+min_pq.top())/2.0;
    }
}
int main(){
    
    
}

// Input:
// N = 3
// X[] = 5,10,15
// Output:
// 5
// 7.5
// 10