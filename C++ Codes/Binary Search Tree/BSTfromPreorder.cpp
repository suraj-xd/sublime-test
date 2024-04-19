#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left,*right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* constructBST(int preorder[],int* preorderIdx,int key, int min, int max,int n){
    if(*preorderIdx>=n){
        return NULL;
    }
    Node* root = NULL;
    if(key > min && key < max){
        root = new Node(key);
        *preorderIdx = *preorderIdx+1;
        if(*preorderIdx < n){
            root->left = constructBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
        }
        if(*preorderIdx < n){
            root->right = constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
        }
    }
    return root;
}
void Preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
int main(){
    //     10
    //    /  \
    //   2   13
    //  /    /
    // 1    11
    int preorder[] = {10,2,1,13,11};
    int preorderIdx = 0;
    int n  = 5;
    Node* root = constructBST(preorder,&preorderIdx,preorder[preorderIdx],INT_MIN,INT_MAX,n);
    Preorder(root);
    // output  10 2 1 13 11
}