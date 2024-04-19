#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int t; cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int time = 0;
        int epas = 0,statepas = 0;
        for(auto it:s){
            if(it=='0') epas++;
            else statepas++;
        }
        time = (a*epas)+(b*statepas);
        cout<<time<<endl;
    }
}
// 3
// 2 1 2
// 00
// 2 1 1
// 01
// 4 2 1
// 1101

// output:
// 2
// 2
// 5