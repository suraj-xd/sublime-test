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
Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left!= NULL){
        curr = curr->left;
    }
    return curr;
}
Node* deleteInBST(Node* root, int key){
    if(key < root->data){
        root->left = deleteInBST(root->left,key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right,key);
    }

    else{
        if(root->left==NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right==NULL){
            Node* temp = root->left;
            free(root);
            return root;
        }
        //case 3
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right,temp->data);
    }
    return root;
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

        //      4
        //     / \
        //    2   5
        //   / \   \
        //  1   3   6
        
    inorder(root);
    cout<<endl;
    root = deleteInBST(root,5);
    inorder(root); 

    // inorder of a BST is an ordered array
}