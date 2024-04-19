#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
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
node* rotateRight(node* head,int val){
    int size = 0;
    auto temp = head, temp2 = head, tail = head;
    while (temp)
    {
      size++;
      temp = temp->next;
      if (tail->next)
        tail = tail->next;
    }
    // display(tail);
    if(size<=1) return head;
    val = val%size;
    if(val){
        int count = size-val;
        temp = head;
        while(--count){
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = NULL;
        tail->next = head;
        head = temp2;
    }
    return head;
}
int32_t main(){
    speedo
    node* root = NULL;
    insertAtTail(root,0);
    insertAtTail(root,1);
    insertAtTail(root,2);
    // insertAtTail(root,4);
    // insertAtTail(root,5);
    node* ans = rotateRight(root,4);
    display(ans);
}