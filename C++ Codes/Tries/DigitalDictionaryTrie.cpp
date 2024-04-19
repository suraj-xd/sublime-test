#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class node{
    public:
    node* next[26];
    bool end;
    node(){
        rep(i,0,26){
            next[i] = NULL;
        }
        end = false;
    }
};
class Trie{
    private:
        node* root;
    public:
        Trie(){
            root=  new node();
        }

        void insert(string &s){
            node* it = root;
            for(auto c: s){
                if(!it->next[c-'a']){
                    it->next[c-'a'] = new node();
                }
                it = it->next[c-'a'];
            }
            it->end = true;
        }

        void find(string &s){
            node* it = root;
            for(auto c:s){
                if(!it->next[c-'a']){
                    cout<<"No Suggestions\n";
                    insert(s);
                }
                it = it->next[c-'a'];
            }

            vector<string> res;
            printAll(it,s,res,"");

            for(auto c : res){
                cout<<s<<c<<"\n";
            }
        }
        void printAll(node* it,string &s, vector<string> &res, string curr){
            if(it==NULL) return;
            if(it->end) res.push_back(curr);

            rep(i,0,26){
                if(it->next[i]){
                    printAll(it->next[i],s,res,curr+char('a'+i));
                }
            }
        }
};
int main(){
    Trie t;
    int n; cin>>n;
    vector<string> a(n);
    for(auto &i:a){
         cin>>i;
         t.insert(i);
    }
    int q; cin>>q;
    while(q--){
        string s; cin>>s;
        t.find(s);
    }
}

// input: 4
// rat
// rack
// bat
// batman
// 3
// r
// bat
// quick

// output: rack
// rat
// bat
// batman
// No Suggestions
// quick