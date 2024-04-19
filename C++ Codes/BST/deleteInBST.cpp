#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// can be done using two connections
// in this method: connecting root->left to root->root
TreeNode* findLastRight(TreeNode* root){
    if(!root->right) return root;
    return findLastRight(root->right);
}
TreeNode* helper(TreeNode* root){
    if(!root->left){
        return root->right;
    }else if(!root->right){
        return root->left;
    }
    TreeNode* rightChild = root->right;
    TreeNode* lastRight = findLastRight(root->left);
    lastRight->right = rightChild;
    return root->left;
}
TreeNode* deleteInBST(TreeNode* root, int val){
    if(!root) return NULL;
    if(root->val==val) return helper(root);
    TreeNode* dummy = root;
    while(root){
        if(root->val > val){
            if(root->left && root->left->val==val){
                root->left = helper(root->left);
                break;
            }else{
                root = root->left;
            }
        }else{
            if(root->right && root->right->val==val){
                root->right = helper(root->right);
                break;
            }else{
                root = root->right;
            }
        }
    }
    return dummy;
}
void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
    TreeNode* root = new TreeNode(6);
    root->left  =  new TreeNode(3);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(7);    

    root = deleteInBST(root,3);
    inorder(root);
}
// 2 4 6 7 8

// can be done using two connections
// in this method: connecting root->right to root->left
TreeNode* findLastleft(TreeNode* root){
    if(!root->left) return root;
    return findLastleft(root->left);
}
TreeNode* helper(TreeNode* root){
    if(!root->left){
        return root->right;
    }else if(!root->right){
        return root->left;
    }
    TreeNode* leftChild = root->left;
    TreeNode* lastleft = findLastleft(root->right);
    lastleft->left = leftChild;
    return root->right;
}
TreeNode* deleteInBST(TreeNode* root, int val){
    if(!root) return NULL;
    if(root->val==val) return helper(root);
    TreeNode* dummy = root;
    while(root){
        if(root->val > val){
            if(root->left && root->left->val==val){
                root->left = helper(root->left);
                break;
            }else{
                root = root->left;
            }
        }else{
            if(root->right && root->right->val==val){
                root->right = helper(root->right);
                break;
            }else{
                root = root->right;
            }
        }
    }
    return dummy;
}
void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
    TreeNode* root = new TreeNode(6);
    root->left  =  new TreeNode(3);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(7);    

    root = deleteInBST(root,3);
    inorder(root);
}