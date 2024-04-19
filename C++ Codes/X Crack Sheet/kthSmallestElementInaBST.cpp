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
int ans = -1;
void inorder(TreeNode* root,int k){
    if(!root || k==0) return;
    inorder(root->left,k);
    k--;
    if(k==0){
        ans = root->val;
    }
    inorder(root->right,k);
}
int kthSmallestElementInaBST(TreeNode* root,int k){
    inorder(root,k);
    return ans;
}
int main(){

}