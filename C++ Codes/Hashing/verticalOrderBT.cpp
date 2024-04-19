#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
struct Node{
    int data;
    Node *left,*right;
    Node(int key){
        data = key;
        left = right = NULL;
    }
};
void verticalOrderBT(Node* root,int hdis, map<int,vi> &m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->data);
    verticalOrderBT(root->left,hdis-1,m);
    verticalOrderBT(root->right,hdis+1,m);
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(3);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    map<int , vi> m;
    int hdis = 0;
    verticalOrderBT(root,hdis,m);
    map<int,vector<int>> :: iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        for (size_t i = 0; i < (it->ss).size(); i++)
        {
            cout<<(it->ss)[i]<<" ";
        }
        cout<<endl;
        
    }
}