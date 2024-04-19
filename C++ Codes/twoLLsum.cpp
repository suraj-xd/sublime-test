#include <bits/stdc++.h>
using namespace std;

// brute force approach

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
void displayList(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
vector<int> s;
void display(node* head){
    if(head==NULL) return;
    display(head->next);
    s.push_back(head->data);
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertAtTail(head1,2);   
    insertAtTail(head1,4);   
    insertAtTail(head1,3);
    insertAtTail(head2,5);   
    insertAtTail(head2,6);   
    insertAtTail(head2,4);
    
    display(head1);
    vector<int> s1 = s;
    s = {0};
    display(head2);
    vector<int> s2 = s;
    int num1 = 0,num2=0;
    for(auto i: s1){
        num1*=10;
        num1+=i;
    }
    for(auto i: s2){
        num2*=10;
        num2+=i;
    }
    int ans = num1+num2;
    node* Ans = NULL;
    while(ans!=0){
        int num = ans%10;
        insertAtTail(Ans,num);
        ans/=10;
    }

    displayList(Ans);

}  
//     Input: l1 = [2,4,3], l2 = [5,6,4]
    // Output: [7,0,8]
    // Explanation: 342 + 465 = 807.

    
