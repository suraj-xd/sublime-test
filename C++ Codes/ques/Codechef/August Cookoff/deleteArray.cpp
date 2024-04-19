#include<bits/stdc++.h>
using namespace std;
#define speedo           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
bool compare(int a,int b){
    return a > b;
}
int32_t main(){
    speedo
    int n = 5,k = 2,x = 7;
    vi a = {9,10,11,12,13};
    sort(all(a),compare);
    int amount = 0;
    rep(i,0,n){
        if(k){
            amount+=x;
            i++;
            k--;
        }else{
            amount+=a[i];
        }
    }
    cout<<amount;
}

// 23