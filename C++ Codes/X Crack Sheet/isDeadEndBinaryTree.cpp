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
void inorder(TreeNode *root, unordered_set<int> &vis, unordered_set<int> &leaf)
{
  if (!root)
    return;
  vis.insert(root->val);
  if (!root->left && !root->right)
    leaf.insert(root->val);
  inorder(root->left, vis, leaf);
  inorder(root->right, vis, leaf);
}

bool isDeadEnd(TreeNode *root)
{
  unordered_set<int> vis, leaf;
  vis.insert(0);
  inorder(root, vis, leaf);

  for (auto &i : leaf)
  {
    cout<<i<<endl;
    if (vis.count(i - 1) && vis.count(i + 1))
      return true;
  }
  return false;
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
    cout<<isDeadEnd(root);
}

// Input :   
//                8
//              /   \ 
//            5      9
//          /  \     
//         2    7 
//        /
//       1     
          
// Output : Yes
// Explanation : Node "1" is the dead End because after that 
//               we cant insert any element.       

// Input :     
//               8
//             /   \ 
//            7     10
//          /      /   \
//         2      9     13

// Output : Yes
// Explanation : We can't insert any element at 
//               node 9.  