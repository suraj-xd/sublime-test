#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct node{
    int data;
    node* left,* right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
int count(node* root){
    if(!root) return 0;
    return 1 + count(root->left) + count(root->right);
}
bool isComplete(node* root,int idx,int cnt){
    if(!root) return true;
    if(idx>=cnt) return false;
    else return isComplete(root->left,idx*2+1,cnt) && isComplete(root->right,idx*2+2,cnt);
}
bool isHeapUtil(node* root){
    if(!root) return true;
    if(root->left==NULL && root->right==NULL) return true;
    if(root->right==NULL){
        return root->data>root->left->data;
    }else{
        if(root->data>=root->left->data && root->right->data){
            return isHeapUtil(root->left) && isHeapUtil(root->right);
        }else return false;
    }

}
bool isHeap(node* tree){
    int idx = 0;
    int cnt = count(tree);
    return isHeapUtil(tree) && isComplete(tree,idx,cnt);
}
int main(){
    
}