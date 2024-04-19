#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
string serialize(TreeNode* root){
    if(!root) return "";
    string s = "";
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        auto curr = q.front();
        q.pop();
        if(curr==NULL){
            s.append("#,");
        }else s.append(to_string(curr->val)+',');
        if(curr){
            q.push(curr->left);
            q.push(curr->right);
        }
    }
    return s;
}
TreeNode* deSerialize(string data){
    if(data.size()==0) return NULL;
    stringstream s(data);
    string str;
    getline(s,str,',');
    TreeNode* root = new TreeNode(stoi(str));
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();

        getline(s,str,',');
        if(str=="#") curr->left = NULL;
        else{
            TreeNode* leftnode = new TreeNode(stoi(str));
            curr->left = leftnode;
            q.push(leftnode);
        }

        getline(s,str,',');
        if(str=="#") curr->right = NULL;
        else{
            TreeNode* rightNode  = new TreeNode(stoi(str));
            curr->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
    TreeNode* root= new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    string serializ =  serialize(root);
    TreeNode* Serialroot = deSerialize(serializ);
    inorder(Serialroot);
}