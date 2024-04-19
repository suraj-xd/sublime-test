#include <bits/stdc++.h>
using namespace std;
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
void displayLeft(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    while(root->left!=NULL){

        cout<<root->left->data<<" ";
        root = root->left;
    }cout<<endl;
}
void displayRight(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    while(root->right!=NULL){

        cout<<root->right->data<<" ";
        root = root->right;
    }cout<<endl;
}
int main(){
    struct Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);
    //        1
    //      /    \ 
    //     2      3
    //    / \    / \
    //   4   5  6   7
    displayLeft(root1);
    displayRight(root1);


    // output = 1 2 4 
}