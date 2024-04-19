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
int32_t main(){
    speedo
    int n; cin>>n;
    int a = 0, b = 0;
    int pw = 1;
    while(n){
        a = a + pw + (n%10);
        n/=10;
        b = b + pw + (n%10);
        n/=10;
        pw*=10;
    }
    cout<<(a-1)*(b-1)-2;
}