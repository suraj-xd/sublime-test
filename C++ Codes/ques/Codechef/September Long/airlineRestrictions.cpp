#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        int bags = a+b+c;
        int diff = d+e;
        if(bags<=diff) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

// 3
// 1 1 1 15 5
// 8 7 6 15 5
// 8 5 7 15 5

// YES
// NO
// YES