#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct Node{
    int root;
    Node* right;
    Node* left;
    Node(int val){
        root = val;
        right = left = NULL;
    }
};
vi bfs(Node* root){
    int level = 0;
    vi ans;
    if(root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        rep(i,0,n){
            Node* node = q.front();
            q.pop();
            ans.push_back(node->root);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        level++;
    }
    cout<<"Level: "<<level<<endl;
    return ans;

}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vi ans = bfs(root);
    for(auto it:ans) cout<<it<<" ";    
}