#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class MyQueue {
    private:
        int arr[100005];
        int front;
        int rear;

    public :
        MyQueue(){front=0;rear=0;}
        void push(int x){
            if(rear==0){
                arr[front] = x;
            }
            arr[rear] = x;
            rear++;
        };
        int pop(){
            int val = arr[front];
            front++;
            return val;
        };
    };
int main(){
    MyQueue que;
    int n; cin>>n;
    while(n--){
        int query; cin>>query;
        if(query==1){
            int val; cin>>val;
            que.push(val);
        }else{
            cout<<que.pop()<<endl;
        }
    }


}
// optimized

//Function to push an element x in a queue.
// void MyQueue ::push(int x)
// {
//   arr[rear] = x;
//   rear++;
// }

// //Function to pop an element from queue and return that element.
// int MyQueue ::pop()
// {
//   if (rear == front)
//     return -1;
//   int ans = arr[front];
//   front++;
//   return ans;
// }