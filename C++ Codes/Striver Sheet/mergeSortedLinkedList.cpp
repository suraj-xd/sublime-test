#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
ListNode* sortedLL(ListNode* l1,ListNode* l2){
    ListNode* dummy = new ListNode(-1);
    auto temp = dummy;
    while(l1 && l2){
        if(l1->val < l2->val){
            temp->next  = l1;
            temp = temp->next;
            l1 = l1->next;
            temp->next = NULL;
        }else{
            temp->next  = l2;
            temp = temp->next;
            l2 = l2->next;
            temp->next = NULL;
        }
    }
    if(l1){
        temp->next = l1;
    }
    if(l2){
        temp->next = l2;
    }

    return dummy->next;
}
int main(){
    
}