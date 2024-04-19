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
int bitwiseComplement(int n){
    if(n==0) return 1;
    int num = 0;
    while(num < n){
        num = (num<<1) | 1;
    }
    return ~n & num;
}
int32_t main(){
    speedo
    int n; cin>>n;
    cout<<bitwiseComplement(n);
}