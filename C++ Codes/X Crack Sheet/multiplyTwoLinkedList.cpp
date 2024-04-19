#include<bits/stdc++.h>
using namespace std;
#define ll               long long  
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
const int Mod = 1e9+7;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};
ll multiplyTwoLinkedList(node* a,node* b){
    ll aa = 0,bb = 0;
    while(a){
        aa = (aa * 10LL + a->data)%Mod;
        a = a->next;
    }
    while(b){
        bb = (bb * 10LL + b->data)%Mod;
        b = b->next;
    }
    ll ans = (aa%Mod * bb%Mod)%Mod;
    return ans;
}
int32_t main(){
    speedo
    
}