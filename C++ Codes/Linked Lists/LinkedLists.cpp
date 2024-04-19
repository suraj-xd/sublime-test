#include <bits/stdc++.h>
using namespace std;

// Linked lists

// InsertAttail, Insert at Head, Search
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

bool search(node* head, int key){
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==key){
            return true;
        }
        temp= temp->next;
    }
    return false;
}
// search void function

// void search(node* &head, int key){
//     node* temp=head;
//     while(temp->next!=NULL){
//         if(temp->data==key){
//             cout<<"Yes"<<endl;
//             return;
//         }
//         temp = temp->next;
//     }
//     cout<<"NO"<<endl;
//     return;
// }
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void Deletion(node* &head, int val){
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
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
    if(nextptr!=NULL){
        head->next = reverseK(nextptr,k);
    }
    return prevptr;
}
bool detectCycle(node* &head){
    node* slow= head;
    node* fast = head;
    while(fast!=NULL || fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void makeCycle(node* &head, int pos){
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
void removeCycle(node* &head){
    node* slow= head;
    node* fast = head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);   
    insertAtTail(head,2);   
    insertAtTail(head,3);  
    insertAtTail(head,4);
    display(head);
    deleteAtHead(head);
    display(head);
    // node* newhead = reverse(head);
    // node* newhead = reverseRecursive(head);
    // display(newhead);

}