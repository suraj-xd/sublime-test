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
vi bottomView(Node* root){
    vi ans;
    if(!root) return {};
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(q.size()){
        auto curr = q.front();
        q.pop();
        m[curr.second] = curr.first->val;
        if(curr.first->left) {
            q.push({curr.first->left,curr.second-1});
        }
        if(curr.first->right) {
            q.push({curr.first->right,curr.second+1});
        }
    }

    for(auto &i:m){
        ans.push_back(i.second);
    }
    return ans;
}
vi topView(Node* root){
    vi ans;
    if(!root) return {};
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(q.size()){
        auto curr = q.front();
        q.pop();
        if(m.find(curr.second)==m.end()){
            m[curr.second] = curr.first->val;
        }
        if(curr.first->left) {
            q.push({curr.first->left,curr.second-1});
        }
        if(curr.first->right) {
            q.push({curr.first->right,curr.second+1});
        }
    }

    for(auto &i:m){
        ans.push_back(i.second);
    }
    return ans;
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
    cout<<"Bottom View: \n";
    vi ans1 = bottomView(root);
    for(auto it:ans1) cout<<it<<" ";
    cout<<"\nTop View: \n";
    vi ans2 = topView(root);
    for(auto it:ans2) cout<<it<<" ";

}

// recursive

// map<int,int> mp;
// void dfs(TreeNode* root,int line){
//     if(!root) return;
//     if(mp.find(line)==mp.end()){
//         mp[line] = root->val;
//     }
//     dfs(root->left,line-1);
//     dfs(root->right,line+1);
// }
// vi bottomView(TreeNode* root){
//     vi ans;
//     if(!root) return {};
//     dfs(root,0);
//     for(auto it:mp){
//         ans.push_back(it.second);
//     }
//     return ans;
// }