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
// using two stacks
// vi postorderTraversal(TreeNode* root){
//     vi ans;
//     if(root==NULL) return {};
//     stack<TreeNode*> st, ss;
//     st.push(root);
//     while(!st.empty()){
//         auto curr = st.top();
//         st.pop();
//         ss.push(curr);
//         if(curr->left) st.push(curr->left);
//         if(curr->right) st.push(curr->right);
//     }
//     while(!ss.empty()){
//         ans.push_back(ss.top()->val);
//         ss.pop();
//     }
//     return ans;
// }
// using one stack and O(2N) TC
vi postorderTraversal(TreeNode* root){
    vi ans;
    if(root==NULL) return {};
    stack<TreeNode*>st;
    auto curr = root;
    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }else{
            auto temp = st.top()->right;
            if(temp==NULL){
                temp= st.top();
                st.pop();
                ans.push_back(temp->val);
                while(!st.empty() && temp==st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
            }else{
                curr = temp;
            }
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
    root->right->right = new TreeNode(7);
    vi ans = postorderTraversal(root);
    for(auto it:ans) cout<<it<<" ";
}

// 4 5 2 6 7 3 1