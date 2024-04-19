#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left,*right;
    Node(int val){
        data= val;
        left = right = NULL;
    }
};
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* insert(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left = insert(root->left,val);
    }else{
        root->right = insert(root->right,val);
    }
    return root;
}
float mean = 0;
// float MeanBST(Node* root, int key){
//     if(root==NULL && root->left==NULL && root->right==NULL){
//         return -1;
//     }
//     if(key==root->data){
//         return key;
//     }
//     if(key>root->left->data && key<root->data){
//         mean = (root->left->data + root->data)/2;
//         return mean;
//     }else if(key<root->right->data && key>root->data){
//         mean = (root->right->data + root->data)/2;
//         return mean;
//     }
    
//     if(key<root->data){
//         return MeanBST(root->left,key);
//     }
//     return MeanBST(root->right,key);
// }
int MeanBST(Node* root, int key){
    if(key==root->data){
        return key;
    }
    if(key<root->data){
        while(root->left!=NULL){
            if(key<root->left->data && key>root->data){
                mean = (root->left->data+root->data)/2;
                return mean;
            }
            root = root->left;
        }
    }else{
        while(root!=NULL || root->right!=NULL){
            if(key>root->right->data && key<root->data){
                mean = (root->left->data+root->data)/2;
                return mean;
            }
            root = root->right;
        }
    }
    return -1;
}
int main(){
    Node* root = NULL;
    root = insert(root,1);
    insert(root,3);
    insert(root,5);

    /*   3
        / \
    //    1   5  */ 
    // key = 2

    cout<<MeanBST(root,2);

            
    

}