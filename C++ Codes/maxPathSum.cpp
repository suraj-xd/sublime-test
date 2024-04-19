#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct Node{
    int val;
    struct Node* left;
    struct Node* right;

    Node(int val){
        this->val= val;
        left = NULL;
        right = NULL;
    }
};
int calcdiameter(Node* root,int &maxi){
    if(!root) return 0;
    int lh = max(0,calcdiameter(root->left,maxi));
    int rh = max(0,calcdiameter(root->right,maxi));
    maxi = max(maxi,rh + lh + root->val);
    return max(lh,rh) + root->val;
}
int maxPathSum(Node* root){
    int diameter = INT_MIN;
    calcdiameter(root,diameter);
    return diameter;
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<maxPathSum(root)<<"\n";
}