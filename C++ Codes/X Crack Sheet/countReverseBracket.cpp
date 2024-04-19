#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int left(0),right(0);
        for(auto &i:s){
            if(i=='{'){
                left++;
            }else{
                if(left==0){
                    right++;
                }else{
                    left--;
                }
            }
        }
        if((left+right)%2){
            cout<<"-1"<<endl;
        }else{
            int ans = 0;
            if(left%2){
                ans = 2;
            }
            ans += left/2 + right/2;
            cout<<ans<<endl;
        }
    }
}

// input: 
// 4
// }{{}}{{{
// {{}}}}
// {{}{{{}{{}}{{
// {{{{}}}}

// Output:
// 3
// 1
// -1
// 0
