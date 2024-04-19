#include <bits/stdc++.h>
using namespace std;
// Queue using Stack Recursively
class Queue{
    stack<int> s1;

    public:
    void push(int val){
        s1.push(val);
    }
    int pop(){
        if(s1.empty()){
            cout<<"No elements in Queue\n";
            return -1;
        }

        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
    }

    bool empty(){
        if(s1.empty()){
            return true;  
        }
        return false;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
}