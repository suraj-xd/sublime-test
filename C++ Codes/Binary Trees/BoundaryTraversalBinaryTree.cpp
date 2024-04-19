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
bool isLeaf(Node* &root){
    if(root->left==NULL && root->right==NULL){
        return true;
    }else return false;
}
void addLeftBoundary(Node* root, vi &res){
    Node* cur = root->left;
    while(cur){
        if(!isLeaf(cur)){
            res.push_back(cur->val);
        }
        if(cur->left) cur = cur->left;
        else cur = cur->right;
    }
}
void addRightBoundary(Node* root,vi &res){
    Node* cur = root->right;
    vi temp;
    while(cur){
        if(!isLeaf(cur)) temp.push_back(cur->val);
        if(cur->right) cur = cur->right;
        else cur = cur->left;
    }
    for(int i = temp.size()-1;i>=0;--i){
        res.push_back(temp[i]);
    }
}
void addLeaves(Node* root,vi &res){
    if(isLeaf(root)){
        res.push_back(root->val);
        return;
    }
    if(root->left) addLeaves(root->left,res);
    if(root->right) addLeaves(root->right,res);
}
vi printBoundary(Node* root){
    vi res;
    if(!root) return res;
    if(!isLeaf(root)) res.push_back(root->val);
    addLeftBoundary(root,res);
    addLeaves(root,res);
    addRightBoundary(root,res);
    return res;
}
int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
        //         1
        //      /     \
        //    2        3
        //  /   \    /  \
        // 4     5  6    7
    
    vi ans = printBoundary(root);
    for(auto it:ans) cout<<it<<" ";
    // 1 2 4 5 6 7 3 

}