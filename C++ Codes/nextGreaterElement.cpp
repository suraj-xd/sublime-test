#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n; cin>>n;
    vi arr(n);
    for(auto &i:arr) cin>>i;

    stack<int> st;
    rep(i,0,n-1){
        if(arr[i]<arr[i+1]){
            st.push(arr[i+1]);
            cout<<st.top()<<endl;
        }else{
            cout<<"-1"<<endl;
        }
        
    }
}