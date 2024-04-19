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
vector<int> arr;
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    arr.push_back(root->data);
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
    

    
    Node* root2 = NULL;
    root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    //   1
    //  / \
    // 2   3

    inorder(root);
    for(auto &i : arr){
        cout<<i<<" ";
    }cout<<endl;
    sort(arr.begin(),arr.end());
    for(auto &i : arr){
        cout<<i<<" ";
    }


    
}