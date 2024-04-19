#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct Node {
     int val;
     Node *left;
     Node *right;
     Node() : val(0), left(nullptr), right(nullptr) {}
     Node(int x) : val(x), left(nullptr), right(nullptr) {}
      Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};
bool check(Node* root,int &level,int depth){
    if(!root->left  && !root->right){
        if(level==-1){
            level=  depth;
        }else if(level != depth) return false;
        else return true;
    }
    if(root->left && !check(root->left,level,depth+1)) return false;
    if(root->right && !check(root->right,level,depth+1)) return false;
    else return true;
}
bool isLeafSameLevel(Node* root){
    if(!root) return true;
    int level = -1;
    return check(root,level,0);
}
int main(){
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(3);
    root->left->left = new Node(10);
    root->left->right = new Node(20);
    cout<<isLeafSameLevel(root);
}