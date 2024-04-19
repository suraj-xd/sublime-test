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
// wherever i find NULL: i put the node
TreeNode* insertIntoBST(TreeNode* root, int val){
    if(!root) return new TreeNode(val);
    TreeNode* cur = root;
    while(true){
        if(cur->val<=val){
            if(cur->right) {
                cur = cur->right;
            }
            else {
                cur->right = new TreeNode(val);
                break;
            }    
        }else{
            if(cur->left) {
                cur = cur->left;
            }
            else {
                cur->left = new TreeNode(val); 
                break;
            }
        }
    }
    return root;
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

    root = insertIntoBST(root,5);
    inorder(root);

}