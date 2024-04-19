#include <bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>, greater<int>> pqmin;
priority_queue<int,vector<int>> pqmax;

void insert(int x){
    if(pqmin.size()==pqmax.size()){
        if(pqmax.size()==0){
            pqmax.push(x);
        }
        if(x<pqmax.top()){
            pqmax.push(x);
        }
        else{
            pqmin.push(x);
        }
    }else{
        // two cases possible
        // case1- size of maxHeap > size of Minheap
        // case1- size of minHeap > size of maxheap

        if(pqmax.size()>pqmin.size()){
            if(x >= pqmax.top()){
                pqmin.push(x);
            }else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }else{
            if(x <= pqmin.top()){
                pqmax.push(x);
            }else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double findMedian(){
    if(pqmin.size()== pqmax.size()){
        return (pqmax.top()+pqmin.top())/2.0;
    }
    else if(pqmax.size()>pqmin.size())
        return pqmax.top();
    return pqmin.top();
}

signed main(){
    insert(10);
    cout<<findMedian()<<endl;
    insert(15);
    cout<<findMedian()<<endl;
    insert(21);
    cout<<findMedian()<<endl;
    insert(30);
    cout<<findMedian()<<endl;
    insert(18);
    cout<<findMedian()<<endl;
    insert(19);
    cout<<findMedian()<<endl;
}