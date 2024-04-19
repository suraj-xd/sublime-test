#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int t; cin>>t;
    while(t--){
        int g1,b1,s1,g2,b2,s2;
        cin>>g1>>b1>>s1>>g2>>b2>>s2;
        if(g1+b1+s1>g2+b2+s2) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
}