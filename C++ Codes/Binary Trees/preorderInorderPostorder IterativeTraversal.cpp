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
vvi traversal(TreeNode* root){
    stack<pair<TreeNode*,int>> st;
    st.push({root,1});
    vi pre,in,post;
    while(!st.empty()){
        auto curr = st.top();
        st.pop();
        if(curr.second==1){
            pre.push_back(curr.first->val);
            curr.second++;
            st.push(curr);
            if(curr.first->left!=NULL){
                st.push({curr.first->left,1});
            }
        }
        else if(curr.second==2){
            in.push_back(curr.first->val);
            curr.second++;
            st.push(curr);
            if(curr.first->right){
                st.push({curr.first->right,1});
            }
        }
        else{
            post.push_back(curr.first->val);
        }
    }
    return {in,pre,post};
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vvi ans = traversal(root);
    for(auto it:ans){
        for(auto i:it){
            cout<<i<<" ";
        }cout<<endl;
    }
}

// 4 2 5 1 6 3 7 
// 1 2 4 5 3 6 7 
// 4 5 2 6 7 3 1