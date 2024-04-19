#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class ListNode{
    public:
    int val;
    ListNode* next,*bottom;
    ListNode(int value){
        val  = value;
        next = bottom = NULL;
    }
};
void insertAthead(ListNode* &head, int val){
    ListNode* n = new ListNode(val);
    n->next=head;
    head=n;
}

void insertAtTail(ListNode* &head, int val){
    ListNode* n = new ListNode(val);
    if(head==NULL){
        head=n;
        return;
    }
    ListNode* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
ListNode* mergeTwoList(ListNode* a,ListNode* b){
    ListNode* temp = new ListNode(0);
    ListNode* res = temp;
    while(a && b){
        if(a->val < b->val){
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }else{
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }
    if(a){
        temp->bottom = a;
    }else{
        temp->bottom = b;
    }
    return res->bottom;
}
ListNode* flatten(ListNode* root){
    if(root==NULL || root->next==NULL){
        return root;
    }
    // recur for list on right
    root->next = flatten(root->next);

    // now merge
    root = mergeTwoList(root,root->next);

    // return root
    // it will be in turn merged with its left
    return root;
}
int main(){
    ListNode* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    
}