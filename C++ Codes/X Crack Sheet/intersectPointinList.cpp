#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct node
{
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
int intersectPointList(node* l1,node* l2){
    int len1(0),len2(0);
    auto curr1 = l1, curr2 = l2;
    node* newhead = new node(0);
    node* temp = newhead;
    while(curr1){
        len1++;
        curr1 = curr1->next;
    }
    while(curr2){
        len2++;
        curr2 = curr2->next;
    }
    int k = abs(len1-len2);
    curr1 = l1;
    curr2 = l2;
    if(len2 > len2){
        swap(curr1,curr2);
    }
    rep(i,0,k){
        curr1 = curr1->next;
    }
    while(curr1 && curr2){
        if(curr1 == curr2){
            return curr1->data;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return 0;
}
int main(){
    
}