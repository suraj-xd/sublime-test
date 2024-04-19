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
vi inorderTraversal(TreeNode* root){
    vi ans;
    if(root==NULL) return {};
    stack<TreeNode*> st;
    auto curr  = root;
    while(curr || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }else{
            curr = st.top();
            st.pop();
            ans.push_back(curr->val);
            curr = curr->right;
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
    vi ans = inorderTraversal(root);
    for(auto it:ans) cout<<it<<" ";
}

// output: 1 2 4 5 3 6 7
// vector<int> inorderTraversal(TreeNode *root)
//   {
//     vector<int> ans;
//     stack<TreeNode *> st;
//     auto curr = root;

//     while (curr || st.size())
//     {
//       if (!curr)
//       {
//         curr = st.top();
//         st.pop();
//         ans.push_back(curr->val);
//         curr = curr->right;
//       }

//       while (curr)
//       {
//         st.push(curr);
//         curr = curr->left;
//       }
//     }

//     return ans;
//   }