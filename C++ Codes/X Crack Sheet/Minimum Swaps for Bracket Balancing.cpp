#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int main(){
    string s = "[[][]]";
    int a = 0, b = 0;
    rep(i,0,s.size()){
        if(s[i]=='['){
            a++;
        }else{
            if(a==0){
                b++;
            }else{
                a--;
            }
        }
    }
    cout<<a+b;
}