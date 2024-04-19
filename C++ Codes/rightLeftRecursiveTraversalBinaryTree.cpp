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
void dfs(TreeNode* root,int level,vi &res){
    if(root==NULL) return;
    if(res.size()==level){
        res.push_back(root->val);
    }
    dfs(root->right,level+1,res);
// for left side traversal
// traverse int left first
    dfs(root->left,level+1,res);
}
vi rightSide(TreeNode* root){
    vi ans;
    dfs(root,0,ans);
    return ans;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(25);
    vi ans = rightSide(root);
    for(auto it:ans) cout<<it<<" ";
}
// 1 3 25