#include <iostream>
using namespace std;
#define n 20
class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int [n];
        front = -1;
        back = -1;
    }
    // Push elements
    void push(int val){
        if(back==n){
            cout<<"Queue overflow"<<endl;
        }
        back++;
        arr[back] = val;

        if(front==-1){
            front++;
        }
    }
    // Pop elements

    void pop(){
        if(front==-1 || front>back){
            cout<<"No elements to pop"<<endl;
            return;
        }
        front++;
    }

    // returns value at front

    int peek(){
        if(front==-1 || front>back){
            cout<<"No elements in Queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    // check if queue is empty
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    if(q.empty()){
        cout<<"yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}