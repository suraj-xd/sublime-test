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
void markParent(TreeNode* root,map<TreeNode*,TreeNode*> &parent){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        auto curr= q.front();
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
int minTimeBurnTree(TreeNode* root,TreeNode* target){
    map<TreeNode*,TreeNode*> parent;
    map<TreeNode*,bool> vis;
    markParent(root,parent);
    queue<TreeNode*> q;
    q.push(target);
    vis[target] = true;
    int cnt = 0;
    while(!q.empty()){
        int n = q.size();
        cnt++;
        rep(i,0,n){
            auto curr= q.front();
            q.pop();
            if(curr->left && !vis[curr->left]){
                q.push(curr->left);
                vis[curr->left]= true;
            }
            if(curr->right && !vis[curr->right]){
                q.push(curr->right);
                vis[curr->right] = true;
            }
            if(parent[curr] && !vis[parent[curr]]){
                q.push(parent[curr]);
                vis[parent[curr]] = true;
            }
        }
    }
    return cnt;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(7);
    root->right->left  = new TreeNode(5);
    root->right->right = new TreeNode(6);
    // TreeNode* root = new TreeNode(20);
    // root->left = new TreeNode(8);
    // root->right = new TreeNode(3);
    // root->left->left = new TreeNode(5);
    // root->left->right = new TreeNode(3);
    // root->left->right->left = new TreeNode(10);
    // root->left->right->right = new TreeNode(14);
    // root->right->right = new TreeNode(22);
    // root->right->right->right = new TreeNode(25);
    auto target = root->left;
    int ans = minTimeBurnTree(root,target);
    cout<<ans;
}