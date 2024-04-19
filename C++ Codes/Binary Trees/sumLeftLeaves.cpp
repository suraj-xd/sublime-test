#include <bits/stdc++.h>
using namespace std;
// sum of all left leaves of BST
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data= val;
        left = NULL;
        right = NULL;
    }
};
int sum  = 0;
bool isLeaf(Node* root){
    if(root==NULL){
        return false;
    }
    if(root->left==NULL || root->right == NULL){
        return true;
    }
    isLeaf(root->left);
    isLeaf(root->right);
    return false;
}
void inorder(Node* root){
    if(root==NULL || root->left==NULL || root->right==NULL){
        return;
    }
    if(isLeaf(root->left)){
        sum+=root->left->data;
    }
    inorder(root->left);
    inorder(root->right);
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //        1
    //      /    \ 
    //     2      3
    //    / \    / \
    //   4   5  6   7
    
    inorder(root);
    cout<<sum;
}