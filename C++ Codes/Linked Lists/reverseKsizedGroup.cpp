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
ListNode* reverseKsizedGroup(ListNode* head,int k){
    if(!head || k==1) return head;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy,*cur = dummy,*nex = dummy;
    int count = 0;
    while(cur->next!=NULL){
        count++;
        cur = cur->next;
    }
    while(count>=k){
        cur = pre->next;
        nex = cur->next;
        rep(i,1,k){
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        count-=k;
    }
    return dummy->next;
}
int main(){
    ListNode* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    ListNode* newHead = reverseKsizedGroup(head,3);
    display(newHead);
}

// output: 3->2->1->6->5->4->7->8->NULL