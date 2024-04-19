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
vi getInorder(TreeNode* root){
    vi inorder;
    TreeNode* cur = root;
    while(cur){
        if(!cur->left) {
            inorder.push_back(cur->val);
            cur = cur->right;
        }else{
            TreeNode* prev = cur->left;
            while(prev->right!=NULL && prev->right!=cur){
                prev = prev->right;
            }
            if(prev->right==NULL){
                prev->right = cur;
                cur = cur->left;
            }else{
                prev->right = NULL;
                inorder.push_back(cur->val);
                cur = cur->right;
            }
        }
    }
    return inorder;
}
vi getPreorder(TreeNode* root){
    vi preOrder;
    TreeNode* cur = root;
    while(cur){
        if(!cur->left) {
            preOrder.push_back(cur->val);
            cur = cur->right;
        }else{
            TreeNode* prev = cur->left;
            while(prev->right!=NULL && prev->right!=cur){
                prev = prev->right;
            }
            if(prev->right==NULL){
                prev->right = cur;
                preOrder.push_back(cur->val);
                cur = cur->left;
            }else{
                prev->right = NULL;
                cur = cur->right;
            }
        }
    }
    return preOrder;
}
int main(){
    TreeNode* root = new TreeNode(20);
    root->left = new TreeNode(8);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(14);
    root->right->right = new TreeNode(22);
    root->right->right->right = new TreeNode(25);
    vi inorder = getInorder(root);
    for(auto it:inorder) cout<<it<<" ";
    vi getpreorder = getPreorder(root);
    cout<<endl;
    for(auto it:getpreorder) cout<<it<<" ";
}