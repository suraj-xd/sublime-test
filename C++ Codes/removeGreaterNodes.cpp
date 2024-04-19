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
node* compute(node* head){
    if(!head || !(head->next)) return head;
    node* temp = head,*prev = NULL,*nextnode;
    while(temp && temp->next){
        node* temp2 = temp->next;
        while(temp2){
            if(temp2->data>temp->data){
                break;
            }
            temp2 = temp2->next;
        }
        if(temp2){
            auto next = temp->next;
            if(prev==NULL){
                head = next;
            }else{
                prev->next = next;
            }
            free(temp);
            temp = next;
        }else{
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
    
}
int main(){
    node* root = NULL;
    insertAtTail(root,12);
    insertAtTail(root,15); 
    insertAtTail(root,10); 
    insertAtTail(root,11); 
    insertAtTail(root,5); 
    insertAtTail(root,6); 
    insertAtTail(root,2); 
    insertAtTail(root,3); 
    node *newroot= compute(root);
    display(newroot);
}
// LinkedList = 12->15->10->11->5->6->2->3

// another method

// node* compute(node* &head){
//     head = reverse(head);
//     node* rev = head;
//     node* curr = head;
//     node* maxNode = head;
//     node* temp;
//     while(curr!=NULL && curr->next!=NULL){
//         if(curr->next->data<maxNode->data){
//             temp = curr->next;
//             curr->next = temp->next;
//             free(temp);
//         }else{
//             curr = curr->next;
//             maxNode = curr;
//         }
//     }
//     head = reverse(rev);
//     return head;
// }
