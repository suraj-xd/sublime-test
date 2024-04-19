#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class MyStack
{
    private:
        int arr[1000];
        int top;
    public:
        MyStack(){top=-1;}
        int pop(){
            if(top==-1) return -1;
            int val = arr[top];
            top--;
            return val;
        };
        void push(int x){
            top++;
            arr[top]=x;
        };
};
int main(){
    MyStack st;
    int n; cin>>n;
    while(n--){
        int qwu; cin>>qwu;
        if(qwu==1){
            int val; cin>>val;
            st.push(val);
        }else{
            cout<<st.pop()<<endl;
        }
    }
}
// input:
// 5
// 1 2 1 3 2 1 4 2
// output: 3 4
// void MyStack ::push(int x)
// {
//   if (top == 999)
//     return;
//   top++;
//   arr[top] = x;
// }

// /*The method pop which return the element 
//   poped out of the stack*/
// int MyStack ::pop()
// {
//   if (top == -1)
//     return -1;
//   int ans = arr[top];
//   top--;
//   return ans;
// }