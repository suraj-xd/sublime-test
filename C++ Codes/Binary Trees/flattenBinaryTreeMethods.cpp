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
// flatten binary tree recursive
void flatten(TreeNode* root,TreeNode* &prev){
    if(!root) return;
    flatten(root->right,prev);
    flatten(root->left,prev);
    root->right = prev;
    root->left = NULL;
    prev = root;
}
// flatten binary tree iterative
TreeNode* flattenIterative(TreeNode* root){
    if(!root) return NULL;
    stack<TreeNode*> st;
    st.push(root);
    TreeNode* prev= NULL;
    while(!st.empty()){
        prev  = st.top();
        st.pop();
        if(prev->right){
            st.push(prev->right);
        }
        if(prev->left){
            st.push(prev->left);
        }
        if(st.size()){
            prev->right = st.top();
        }
        prev->left = NULL;
    }
    return prev;
}
// flatten binary tree morris traversal
TreeNode* flattenMorris(TreeNode* root){
    TreeNode* cur = root;
    while(cur){
        if(cur->left){
            auto prev = cur->left;
            while(prev->right){
                prev = prev->right;
            }
            prev->right = cur->right;
            cur->right = cur->left;
        }
        cur = cur->right;
    }
    return root;
}
void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
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
    // TreeNode* prev = NULL;
    // flatten(root,prev);
    // inorder(prev);

    // TreeNode* morrisRoot =  flattenMorris(root);
    // inorder(morrisRoot);
    TreeNode* curr = flattenIterative(root);
    inorder(curr);
}