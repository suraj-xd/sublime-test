#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left,*right;

    Node(int val){
        data  = val;
        left = NULL;
        right = NULL;
    }
};
vector<Node*> constructTress(int start, int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for (int i = start; i <= end; i++)
    {
        vector<Node*> leftSubtree = constructTress(start,i-1);
        vector<Node*> RightSubtree = constructTress(i+1,end);

        for (size_t j = 0; j < leftSubtree.size(); j++)
        {
            Node* left = leftSubtree[j];
            for (size_t k = 0; k < RightSubtree.size(); k++){
                Node* right=  RightSubtree[k];
                Node* root = new Node(i);
                root->left = left;
                root->right = right;
                trees.push_back(root);
            }
        }
    }
    return trees;
    
}
void preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    vector<Node*> totalTrees  = constructTress(1,3);
    for (size_t i = 0; i < totalTrees.size(); i++)
    {
        cout<<(i+1)<<" : ";
        preorder(totalTrees[i]);
        cout<<endl;
    }
    
}