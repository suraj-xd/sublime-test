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
Node* addOne(Node* &head){
    head = reverseLL(head);
    display(head);
    int carry = 1;
    auto curr = head;
    while(curr && carry){
        int sum = curr->data + carry;
        carry = sum/10;
        curr->data = sum%10;
        curr = curr->next;
    }
    display(head);

    if(carry){
        curr = head;
        while(curr->next){
            curr = curr->next;
        }
        while(carry){
            Node* node = new Node(carry);
            curr->next = node;
            curr = curr->next;
            carry = carry/10;
        }
    }

    head = reverseLL(head);
    return head;
}
int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    // display(head);cout<<endl;
    Node* newhead = addOne(head);
    // display(newhead);
}