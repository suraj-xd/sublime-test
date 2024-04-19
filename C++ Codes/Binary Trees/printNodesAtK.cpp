#include <bits/stdc++.h>
using namespace std;
// flatten a binary tree into linked list
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
// case 1
void printSubtreeNodes(Node* root,int k){
    if(root==NULL || k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }

    printSubtreeNodes(root->left,k-1);
    printSubtreeNodes(root->right,k-1);
}
// case 2
int printNodesAtK(Node* root, Node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printSubtreeNodes(root,k);
        return 0;
    }
    // dl
    int dl = printNodesAtK(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }else {
            printSubtreeNodes(root->right,k-dl-2);
        }
        return 1+dl;
    }
    // dr
    int dr = printNodesAtK(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }else {
            printSubtreeNodes(root->left,k-dl-2);
        }
        return 1+dr;
    }
    return -1;
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

    printNodesAtK(root,root->left,1);
}



