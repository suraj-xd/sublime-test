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
void rightview(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int n = q.size();
        for (size_t i = 0; i < n; i++)
        {
            Node* curr = q.front();
            q.pop();
            if(i==n-1){
                cout<<curr->data<<" ";
            }

            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        
    }
}
int main(){
    // Balanced
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
    rightview(root1);

    // output = 1 3 7
}