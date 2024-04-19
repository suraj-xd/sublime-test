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
int minTwoNum(vi a){
    sort(all(a));
    int digit1 = 0;
    int digit2 = 0;
    rep(i,0,a.size()){
        if(!(i&1)){
            digit1*=10;
            digit1+=a[i];
        }else{
            digit2*=10;
            digit2+=a[i];
        }
    }
    return digit1+digit2;
}
int32_t main(){
    vi a = {6, 8, 4, 5, 2, 3};
    cout<<minTwoNum(a);

}
// 2 3 4 5 6 8
// 246 + 358