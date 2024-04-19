#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtTail(Node* &head,int val){
    Node* node = new Node(val);
    if(head==NULL){
        head = node;
        return;
    }
    auto temp  = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = node;
}
Node* reverseLL(Node* &head){
    if(!head || !head->next) return head;

    auto prev = reverseLL(head->next);
    head->next->next = head;
    head->next  = NULL;
    return prev;
}
void display(Node* head){
    if(!head) {
        cout<<endl; 
        return;
    }
    cout<<head->data<<" ";
    display(head->next);
}
Node* addTwoList(Node* first,Node* second){
    first = reverseLL(first);
    second = reverseLL(second);
    Node* newhead= new Node(-1);
    auto temp = newhead;
    int carry = 0;
    while(first || second){
        carry+= (first!=NULL) ? first->data : 0;
        carry+= (second!=NULL) ? second->data : 0;
        Node* newnode = new Node(carry%10);
        temp->next  =newnode;
        temp = temp->next;
        carry = carry/10;
        if(first){
            first = first->next;
        }
        if(second){
            second= second->next;
        }
    }
    while(carry){
        Node* carryNode = new Node(carry%10);
        temp->next = carryNode;
        temp = temp->next;
        carry = carry/10;
    }
    return reverseLL(newhead->next);
}
int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    Node* head2 = NULL;
    insertAtTail(head2,3);
    insertAtTail(head2,4);
    Node* headhead = addTwoList(head,head2);
    display(headhead);
    //  output: 1 5 7
}