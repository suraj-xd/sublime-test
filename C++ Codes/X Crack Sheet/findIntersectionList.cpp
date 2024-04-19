#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct node
{
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

node *findIntersectionList(node* l1,node* l2){
    auto curr1 = l1,curr2 = l2;
    node* newHead = new node(0);
    node* temp = newHead;
    while(l1 || l2){
        if(curr1->data==curr2->data){
            temp->data = curr1->data;
            temp = temp->next;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }else if(curr1->data < curr2->data){
            curr1 = curr1->next;
        }else{
            curr2 = curr2->next;
        }
    }
    return newHead->next;
}
int main(){
    
}