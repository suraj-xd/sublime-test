#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class Trie{
public:
    class node{
        public:
        bool end;
        node* next[26];
        node(){
            end = false;
            for(int i=0;i<26;i++){
                next[i] = NULL;
            }
        }
    };
    node* trie;
    Trie(){
        trie = new node();
    }

    void insert(string word){
        int i = 0;
        node* it = trie;
        while( i < word.size()){
            if(it->next[word[i]-'a']==NULL){
                it->next[word[i]-'a']=new node();
            }
            it = it->next[word[i]-'a'];
            i++;
        }
        it->end = true;
    }

    bool search(string word){
        int i = 0;
        node* it = trie;
        while(i < word.size()){
            if(it->next[word[i]-'a']==NULL){
                return false;
            }
            it = it->next[word[i]-'a'];
            i++;
        }
        return it->end;
    }
};
int main(){
    Trie* myTrie = new Trie();
    vector<string> words = {"ayushi","ramesh"};
    for(auto i: words){
        myTrie->insert(i);
    }

    if(myTrie->search("kamlesh")){
        cout<<"Kamlesh does exist\n";
    }else{
        cout<<"Kamlesh doesn't exist\n";
    }

    if(myTrie->search("ayushi")){
        cout<<"ayushi does exist\n";
    }else{
        cout<<"ayushi doesn't exist\n";
    }
}

// output: Kamlesh doesn't exist
//         ayushi does exist