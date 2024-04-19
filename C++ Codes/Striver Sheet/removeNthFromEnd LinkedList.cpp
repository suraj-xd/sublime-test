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
void Deletion(ListNode* &head, int val){
   ListNode* temp = head;
   while(temp->next->val!=val){
       temp = temp->next;
   }
   ListNode* toDelete = temp->next;
   temp->next = temp->next->next;
   delete toDelete;
}
ListNode* removeNthFromEnd(ListNode* head,int val){
    auto fast = head, slow = head;
    for(int i=0;i<val;++i){
        fast = fast->next;
    }
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    slow = dummy;

    while(fast){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}
int main(){
    ListNode* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    ListNode* newNode = NULL;
    newNode = removeNthFromEnd(head,2);
    display(newNode);

}