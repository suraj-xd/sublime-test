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
vvi zigzagTraversal(TreeNode* root){
    if(!root) return {};
    vvi ans;
    queue<TreeNode*> q;
    bool flag = false;
    while(!q.empty()){
        int n = q.size();
        vi sub;
        for(int i=n;i>0;i--){
            auto curr = q.front();
            q.pop();
            sub.push_back(curr->val);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        if(flag){
            reverse(sub.begin(),sub.end());
        }
        ans.push_back(sub);
        flag = !flag;
    }
    return ans;
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
}