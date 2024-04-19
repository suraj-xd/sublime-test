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
map<int,vi> mp;
vi diagonalTraversal(TreeNode* root){
    vi ans;
    if(!root) return {};
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        TreeNode* node = p.first;
        int point = p.second;
        mp[point].push_back( node->val);
        if(node->left) q.push({node->left,point+1});
        if(node->right) q.push({node->right,point});
    }
    for(auto it:mp){
        for(auto i:it.second){
            ans.push_back(i);
        }
    }
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
    vi ans = diagonalTraversal(root);
    for(auto it:ans){
        cout<<it<<" ";
    }
}

// 1 3 25 2 5 6 4

// recursive

// map<int, vector<int>> M;
// void dfs(Node *root, int point)
// {
//   if (!root)
//     return;
//   M[point].push_back(root->data);
//   dfs(root->left, point + 1);
//   dfs(root->right, point);
// }

// vector<int> diagonal(Node *root)
// {
//   M.clear();
//   dfs(root, 0);
//   vector<int> ans;
//   for (auto &i : M)
//   {
//     for (auto &j : i.second)
//       ans.push_back(j);
//   }
//   return ans;
// }
