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
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){
    ListNode *dummy = new ListNode(-1);
    auto temp = dummy;
    int carry = 0;

    while (l1 && l2)
    {
      int digit = l1->val + l2->val + carry;
      carry = digit / 10;
      digit = digit % 10;
      l1 = l1->next;
      l2 = l2->next;
      ListNode *newNode = new ListNode(digit);
      temp->next = newNode;
      temp = temp->next;
    }

    while (l1)
    {
      int digit = l1->val + carry;
      carry = digit / 10;
      digit = digit % 10;
      l1 = l1->next;
      ListNode *newNode = new ListNode(digit);
      temp->next = newNode;
      temp = temp->next;
    }

    while (l2)
    {
      int digit = l2->val + carry;
      carry = digit / 10;
      digit = digit % 10;
      l2 = l2->next;
      ListNode *newNode = new ListNode(digit);
      temp->next = newNode;
      temp = temp->next;
    }

    while (carry)
    {
      int digit = carry;
      carry = digit / 10;
      digit = digit % 10;
      ListNode *newNode = new ListNode(digit);
      temp->next = newNode;
      temp = temp->next;
    }

    return dummy->next;
}
int main(){
    ListNode* head1 = NULL;
    ListNode* head2 = NULL;
    insertAtTail(head1,2);
    insertAtTail(head1,4);
    insertAtTail(head1,3);
    insertAtTail(head2,5);
    insertAtTail(head2,6);
    insertAtTail(head2,4);

    ListNode* ans = NULL;
    ans = addTwoNumbers(head1,head2);

    display(ans);

}
// output: 7->0->8->NULL