#include <bits/stdc++.h>
using namespace std;
// count of all nodes
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
int countAllNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countAllNodes(root->left) + countAllNodes(root->right) + 1;
}
int sumAllNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumAllNodes(root->left) + sumAllNodes(root->right) + root->data;
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<countAllNodes(root)<<"\n";
    cout<<sumAllNodes(root)<<"\n";

}