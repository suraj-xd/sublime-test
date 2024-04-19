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
// checks if there is a complete subtree then no need to calculate futher
int heightLeft(TreeNode* root){
    if(!root) return 0;
    int cnt = 0;
    while(root){
        cnt++;
        root = root->left;
    }
    return cnt;
}
int heightRight(TreeNode* root){
    if(!root) return 0;
    int cnt = 0;
    while(root){
        cnt++;
        root = root->right;
    }
    return cnt;
}
int countNode(TreeNode* root){
    if(!root) return 0;
    int lh = heightLeft(root);
    int rh = heightRight(root);
    if(lh==rh) return (1<<lh)-1;

    return 1 + countNode(root->left) + countNode(root->right);
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
    cout<<countNode(root);
}
// output: 9