#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;

    Node(int val){
        data  = val;
        left = NULL;
        right = NULL;
    }
};
bool isBST(Node* root, Node* min=NULL,Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min != NULL && root->data <= min->data){
        return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }

    bool leftBST = isBST(root->left,min,root);
    bool rightBST = isBST(root->right,root,max);

    return leftBST and rightBST;

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
    

    
    Node* root2 = NULL;
    root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    //   1
    //  / \
    // 2   3

    if(isBST(root,NULL,NULL)){
        cout<<"Valid BST\n";
    }else{
        cout<<"Invalid BST\n";
    }
}