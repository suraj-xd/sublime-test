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
ListNode* cycle(ListNode* head){
    if(!head) return NULL;
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* entry = head;
    while(fast->next!=NULL || fast->next->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow==fast){
            fast = head; // can use entry pointer too
            while(fast==slow){
                slow = slow->next;
                fast = fast->next;
            }
            return fast;
        }
    }
    return NULL;
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