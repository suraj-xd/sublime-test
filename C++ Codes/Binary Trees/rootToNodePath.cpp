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
bool getPath(TreeNode* root,vi &ans,int val){
    if(!root) return false;
    ans.push_back(root->val);
    if(root->val==val){
        return true;
    }
    if(getPath(root->left,ans,val) || getPath(root->right,ans,val)){
        return true;
    }
    ans.pop_back();
    return false;
}
vi rootToNodePath(TreeNode* root,int val){
    vi ans;
    if(!root) return {};
    getPath(root,ans,val);
    return ans;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->left->right = new TreeNode(7);

    vi ans = rootToNodePath(root,7);
    for(auto it:ans){
        cout<<it<<" ";
    }
}

// 1 2 7