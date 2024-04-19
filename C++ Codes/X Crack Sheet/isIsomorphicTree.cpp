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
bool isIsomorphic(TreeNode *root1, TreeNode *root2)
{
  if (!root1 && !root2)
    return true;
  if (!root1 || !root2 || root1->val != root2->val)
    return false;

  auto l1 = root1->left, r1 = root1->right;
  auto l2 = root2->left, r2 = root2->right;

  return (isIsomorphic(l1, l2) && isIsomorphic(r1, r2)) ||
         (isIsomorphic(l1, r2) && isIsomorphic(r1, l2)) ||
         (isIsomorphic(r1, l2) && isIsomorphic(l1, r2));
}
int main(){
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->left->left = new TreeNode(4);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->right = new TreeNode(2);
    root2->right->right = new TreeNode(4);
    root2->left = new TreeNode(3);

    cout<<isIsomorphic(root1,root2);
    // Yes
}