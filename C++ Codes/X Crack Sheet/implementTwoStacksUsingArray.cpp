#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
public:
   twoStacks(int n=100){size = n; arr = new int[n]; top1 = -1; top2 = size;}
 
   void push1(int x){
       top1++;
       arr[top1] = x;
   };
   void push2(int x){
       top2--;
       arr[top2] = x;
   };
   int pop1(){
       if(top1==-1) return -1;
       return arr[top1--];
   };
   int pop2(){
       if(top2==99) return -1;
       return arr[top2++];
   };
};
int main(){
       
}

// void twoStacks ::push2(int x)
// {
//   top2--;
//   arr[top2] = x;
// }

// /* The method pop to pop element from the stack 1 */
// //Return the popped element
// int twoStacks ::pop1()
// {
//   if (top1 == -1)
//     return -1;
//   return arr[top1--];
// }

// /* The method pop to pop element from the stack 2 */
// //Return the popped element
// int twoStacks ::pop2()
// {
//   if (top2 == size)
//     return -1;
//   return arr[top2++];
// }
