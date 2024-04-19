#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct TreeNode {
     int data;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : data(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : data(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
int getCount(TreeNode* root,int low,int high){
    if(!root) return 0;
    if(root->data==high && root->data==low){
        return 1;
    }

    if(root->data<=high && root->data>=low){
        return 1 + getCount(root->left,low,high) + getCount(root->right,low,high);
    }
    else if(root->data<low){
        return getCount(root->right,low,high);
    }else return getCount(root->left,low,high);
}
int main(){
    struct TreeNode* root = new TreeNode(10);  
    root->left = new TreeNode(5);
    root->right = new TreeNode(50);
    root->left->left  = new TreeNode(1);
    root->right->left = new TreeNode(40);
    root->right->right = new TreeNode(100);
    int ans = getCount(root,5,45);
    cout<<ans;
}
// output: 3