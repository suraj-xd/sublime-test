#include <bits/stdc++.h>
using namespace std;
// Binary search tree:
// it has less value in left and greater in right Node

struct Node{
    int data;
    Node *left,*right;

    Node(int val){
        data  = val;
        left = NULL;
        right = NULL;
    }
};

Node* searchInBST(Node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchInBST(root->left,key);
    }

    return searchInBST(root->right,key);
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root = NULL;
    root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if(searchInBST(root,5)==NULL){
        cout<<"Key doesn't exists\n";
    }else{
        cout<<"Key Exist\n";
    }

    if(searchInBST(root,7)==NULL){
        cout<<"Key doesn't exists\n";
    }else{
        cout<<"Key Exist\n";
    }
    inorder(root);

    // inorder of a BST is an ordered array
}