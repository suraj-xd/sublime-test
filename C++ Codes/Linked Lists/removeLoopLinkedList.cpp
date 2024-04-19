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
void removeLoopLinkedList(node* head){
    node* fast = head,*slow = head;
    while(!fast->next && !fast){
        fast = fast->next->next;
        slow  = slow->next;
        if(fast==slow) break;
    }
    if(!fast || !fast->next) return;
    slow = head;
    while(slow!=fast){
        slow  = slow->next;
        fast= fast->next;
    }
    while(fast->next!=slow){
        fast =  fast->next;
    }
    fast->next = NULL;
}
int32_t main(){
    speedo

}