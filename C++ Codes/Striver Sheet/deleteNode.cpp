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
ListNode* deleteNode(ListNode* listNode){
    listNode->val  = listNode->next->val ; 
    listNode->next = listNode->next->next;
}
int main(){
    // delete node
}