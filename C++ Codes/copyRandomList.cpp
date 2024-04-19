#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
  Node *copyRandomList(Node *head)
  {

    Node *newCopy = new Node(-1);
    auto temp = newCopy;
    auto temp_o = head;

    // copy bngyi ek next use krke bss
    while (temp_o)
    {
      Node *newNode = new Node(temp_o->val);
      temp->next = newNode;
      temp = temp->next;
      temp_o = temp_o->next;
    }

    newCopy = newCopy->next;

    // 7 -> 13 -> 11 -> 10 -> 1
    temp = newCopy;
    temp_o = head;

    while (temp)
    {
      auto next = temp->next;
      auto next_o = temp_o->next;

      temp_o->next = temp;
      temp->next = next_o;

      temp_o = next_o;
      temp = next;
    }

    temp = newCopy;
    temp_o = head;

    while (temp_o)
    {
      auto new_rand = temp_o->random;
      if (new_rand)
        temp->random = new_rand->next;
      if (temp_o->next)
        temp_o = temp_o->next->next;
      if (temp->next)
        temp = temp->next->next;
    }

    temp = newCopy;
    temp_o = head;

    while (temp)
    {
      if (temp_o->next)
        temp_o->next = temp_o->next->next;
      if (temp->next)
        temp->next = temp->next->next;
      temp_o = temp_o->next;
      temp = temp->next;
    }

    return newCopy;
  }
int main(){
    
}

// Example 1:
// Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
// Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]