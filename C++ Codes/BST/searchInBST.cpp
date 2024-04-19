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
// recursive search in BST
TreeNode* search(TreeNode* root,int val){
    if(!root) return NULL;
    if(root->val==val) return root;
    if(root->left->val<val){
        return search(root->right,val);
    }else 
        return search(root->left,val);
}
// iterative search in BST
TreeNode* searchIterative(TreeNode* root,int val){
    while(root!=NULL && root->val!=val){
        root = root->left->val < val ? root->right : root->left;
    }
    return root;
}
int main(){
    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(5);
    root->right = new TreeNode(12);
    root->left->left = new TreeNode(4);
    root->left->right= new TreeNode(7);
    root->left->right->left = new TreeNode(6);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(14);
    root->right->right->right = new TreeNode(13);
    TreeNode* node = searchIterative(root,10);
    cout<<node->val;
}