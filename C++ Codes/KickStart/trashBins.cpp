#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int main(){
    vi a = {1,0,0,1,0,0};
    int key = 0;
    int n =a.size();
    vi left(n),right(n);
    rep(i,0,n){
        if(a[i]==1){
            left[i] = 0;
            key = 0;
        }else{
            left[i] = key+=1;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            right[i] = 0;
            key = 0;
        }else{
            right[i] = key+=1;
        }
    }
    for(auto i:left)cout<<i<<" ";
    for(auto i:right)cout<<i<<" ";
    int sum = 0;
    rep(i,0,n){
        sum += min(left[i],right[i]);
    }
    cout<<sum;
}