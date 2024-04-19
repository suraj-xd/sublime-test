#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int value){
        val  = value;
        next = NULL;
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
ListNode* reverseLinked(ListNode* &head){
    if(!head || !head->next) return head;
    ListNode* dummy = NULL;
    while(head){
        auto next = head->next; // 1 2 3
        head->next = dummy;
        if(!next) break;
        dummy = head;
        head = next;
    }
    return head;
}
ListNode* reverse(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next ;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool isPalindrome(ListNode* &head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    slow->next = reverseLinked(slow->next);
    slow = slow->next;
    while (slow!=NULL)
    {
        if(head->val!=slow->val) return false;
        slow = slow->next;
        head= head->next;
    }
    return true;  
}
int main(){
    ListNode* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,1);
    // output: true;

    cout<<isPalindrome(head);
    
}