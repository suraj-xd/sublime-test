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
// children sum property: node must have >= left+right:
void changeTree(TreeNode* root){
    if(!root) return;
    int child  = 0;
    if(root->left){
        child+= root->left->val;
    }
    if(root->right){
        child+= root->right->val;
    }
    if(child >= root->val){
        root->val = child;
    }else{
        if(root->left) root->left->val = root->val;
        if(root->right) root->right->val = root->val;
    }
    changeTree(root->left);
    changeTree(root->right);
    int total = 0;
    if(root->left) total+= root->left->val;
    if(root->right) total+= root->right->val;
    if(root->left or root->right) root->val = total;
}
void inorder(TreeNode* root){
    if(!root) return;
    cout<<root->val<<endl;
    inorder(root->left);
    inorder(root->right);
}
int main(){
    TreeNode* root = new TreeNode(40);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(30);
    root->right->right = new TreeNode(40);

    changeTree(root);
    inorder(root);
}
// following the child sum property:
//         150
//      80    40
//   40   70 30   40