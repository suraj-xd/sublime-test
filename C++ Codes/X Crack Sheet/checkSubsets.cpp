#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool checkSubset(vi &a,vi &b){
    unordered_map<int,int> f;
    rep(i,0,a.size()){
        f[a[i]]++;
    }
    for(auto it:b){
        if(f[it]<=0){
            return false;
        }
        f[it]--;
    }
    return true;
}
int main(){
    vi arr1 = {11, 1 ,13 ,21, 3 ,7};
    vi arr2 = {11, 3, 7, 1};
    if(checkSubset(arr1,arr2)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}