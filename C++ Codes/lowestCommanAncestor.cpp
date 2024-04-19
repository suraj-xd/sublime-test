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
TreeNode* lowestCommanAncestor(TreeNode* root,TreeNode* p,TreeNode* q){
    if(!root || root==q || root==p) return root;
    auto left = lowestCommanAncestor(root->left,p,q);
    auto right = lowestCommanAncestor(root->right,p,q);

    if(left && right){
        return root;
    }
    return left ? left : right;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->left->right = new TreeNode(7);
    auto q = root->left->left = new TreeNode(4);
    auto p = root->left->right = new TreeNode(7);
    TreeNode* ans = lowestCommanAncestor(root,q,p);
    cout<<ans->val<<endl;
}
// output: 2