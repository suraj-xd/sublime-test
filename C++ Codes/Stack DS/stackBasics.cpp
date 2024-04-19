#include<bits/stdc++.h>
using namespace std;
#define n 100
class stackk{
    int* arr;
    int top;

    public:

    stackk(){
        arr = new int[n];
        top = -1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"No elements to Push"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"No elements to Pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No elements in the stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
    stackk st;
    st.push(1);   
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
}