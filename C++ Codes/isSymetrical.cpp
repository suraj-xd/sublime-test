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
bool isSame(TreeNode* left,TreeNode* right){
    if(!left || !right) return left==right;
    if(left->val!=right->val){
        return false;
    }
    return isSame(left->left,right->right) && isSame(left->right,right->left);
}
bool isSymetrical(TreeNode* root){
    return root==NULL || isSame(root->left,root->right);
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->right->right = new TreeNode(3);
    // root->right->left = new TreeNode(3);
    // root->left->right = new TreeNode(4);
    cout<<isSymetrical(root);
}