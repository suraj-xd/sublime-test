#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    heaps- binary tree type data structure, but not BST;

    2 type- max heap, min heap;

    max heap-> root node greatest values of all subnodes
    min heap-> vice verse;
    
    */

    priority_queue<int, vector<int> > pq; // max heap
    pq.push(3);
    pq.push(2);    
    pq.push(1);

    cout<<pq.top();
    pq.pop();
    cout<<"\n"<<pq.top();

    priority_queue<int, vector<int>, greater<int>> pqm; // min heap

    pqm.push(3);
    pqm.push(4);
    pqm.push(2);

    cout<<"\n"<<pqm.top();
    pqm.pop();
    cout<<"\n"<<pqm.top();



}
