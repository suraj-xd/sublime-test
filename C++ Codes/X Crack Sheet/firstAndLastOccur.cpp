#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int t; cin>>t;
    while(t--){
        int n,x ; cin>>n>>x;
        vi a(n);
        for(auto &i:a) cin>>i;
        int firstocur = -1;
        int lastocur  = -1;
        bool first = true;
        rep(i,0,n){
            if(a[i]==x && firstocur && first) {
                firstocur= i;
                first = false;
            }
            if(a[i]==x && lastocur) lastocur  = i;
        }
        if(firstocur && lastocur){
            cout<<firstocur<<" "<<lastocur<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
}
// input:
// 2
// 9 5
// 1 3 5 5 5 5 67 123 125
// 9 7
// 1 3 5 5 5 5 7 123 125
// output:
// 2 5
// 6 6