#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(2);
    dq.push_front(1);
    for(auto i : dq){
        cout<<i<<" ";
    }cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(auto i : dq){
        cout<<i<<" ";
    }cout<<endl;
    cout<<dq.size();
}