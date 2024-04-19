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
void markParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &parent,TreeNode* target){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        if(curr->left){
            parent[curr->left] = curr;
            q.push(curr->left);
        }
        if(curr->right){
            parent[curr->right] = curr;
            q.push(curr->right);
        }
    }
}
vi distanceK(TreeNode* root,TreeNode* target,int k){
    unordered_map<TreeNode*,TreeNode*> parent;
    markParent(root,parent,target);
    unordered_map<TreeNode*,bool> visited;
    queue<TreeNode*> q;
    q.push(target);
    visited[target] = true;
    int curr_level = 0;
    while(!q.empty()){
        int size = q.size();
        if(curr_level++ ==k) break;
        for(int i=0;i<size;i++){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left && !visited[curr->left]){
                q.push(curr->left);
                visited[curr->left] = true;
            }
            if(curr->right && !visited[curr->right]){
                q.push(curr->right);
                visited[curr->right] = true;
            }
            if(parent[curr] && !visited[parent[curr]]){
                q.push(parent[curr]);
                visited[parent[curr]] = true;
            }
        }
    }
    vi ans;
    while(!q.empty()){
        ans.push_back(q.front()->val);
        q.pop();
    }
    return ans;
}
int main(){
    TreeNode* root = new TreeNode(40);
    root->left = new TreeNode(10);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(30);
    root->right->right = new TreeNode(40);

    auto target = root->left->right;
    vi ans = distanceK(root,target,1);
    for(auto it:ans) cout<<it<<" ";
}