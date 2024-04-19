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
vvi verticalTraversal(TreeNode* root){
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<TreeNode*,pair<int,int>>> todo;
    todo.push({root,{0,0}});
    while(!todo.empty()){
        auto p = todo.front();
        todo.pop();
        TreeNode* node = p.first;
        int x = p.second.first, l = p.second.second;
        nodes[x][l].insert(node->val); 
        if(node->left){
            todo.push({node->left,{x-1,l+1}});
        }
        if(node->right){
            todo.push({node->right,{x+1,l+1}});
        }
    }
    vvi ans;
    for(auto p:nodes){
        vi col;
        for(auto q:p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
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

    vvi ans = verticalTraversal(root);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// output:
// 5 
// 8 10 
// 20 3 
// 3 14 
// 22 
// 25


// recursive


// map<int,map<int,multiset<int>>> mp;
// void dfs(TreeNode* root,int line,int level){
//     if(!root) return;
//     mp[line][level].insert(root->val);
//     dfs(root->left,line-1,level+1);
//     dfs(root->right,line+1,level+1);
// }
// vvi verticalView(TreeNode* root){
//     vvi ans;
//     if(!root) return {};
//     dfs(root,0,0);
//     for(auto it:mp){
//         vi col;
//         for(auto i:it.second){
//             col.insert(col.end(),i.second.begin(),i.second.end());
//         }
//         ans.push_back(col);
//     }
//     return ans;
// }
// int main(){
//     TreeNode* root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);
//     root->right->left = new TreeNode(6);
//     root->right->right = new TreeNode(25);
//     vvi ans = verticalView(root);
//     for(auto it:ans){
//         for(auto i:it){
//             cout<<i<<" ";
//         }cout<<endl;
//     }
// }