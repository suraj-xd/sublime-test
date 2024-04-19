#include "bits/stdc++.h"
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

bool isIdentical(Node* root1,Node* root2){
    bool a,b,c = false;
    if(root1==NULL && root2==NULL){
        return true;
    }else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool a = root1->data == root2->data;
        bool b = isIdentical(root1->left,root2->left);
        bool c = isIdentical(root1->right,root2->right);
        if(a && b && c){
            return true;
        }
        return false;
    }
}

int main(){
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(5);

    if(isIdentical(root1,root1)){
        cout<<"BST's are identical\n";
    }else{
        cout<<"BTS's are not identical\n";
    }
    if(isIdentical(root1,root2)){
        cout<<"BST's are identical\n";
    }else{
        cout<<"BTS's are not identical\n";
    } 
}