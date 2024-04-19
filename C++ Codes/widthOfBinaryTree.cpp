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
// width: number of nodes in a level between any two nodes
int widthOfBinaryTree(TreeNode* root){
    if(!root) return 0;
    int ans = 0;
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        int size = q.size();
        int min = q.front().second;
        int first,last;
        for(int i=0;i<size;i++){
            auto curr_id = q.front().second-min;
            TreeNode* node = q.front().first;
            q.pop();
            if(i==0) first = curr_id;
            if(i==size-1) last = curr_id;
            if(node->left){
                q.push({node->left,curr_id*2+1});
            }
            if(node->right){
                q.push({node->right,curr_id*2+2});
            }
        }
        ans = max(ans,last-first+1);
    }
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

    cout<<widthOfBinaryTree(root);
}
// output: 4
