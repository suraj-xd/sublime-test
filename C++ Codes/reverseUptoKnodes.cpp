#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};
void insertAthead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverseK(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    head->next = nextptr;
    return prevptr;
}

int main(){
    node* root = NULL;
    insertAtTail(root,4); 
    insertAtTail(root,3); 
    insertAtTail(root,2); 
    insertAtTail(root,1); 
    node *newroot= reverseK(root,3);
    display(newroot);
}
// 2->3->4->1->NULL
