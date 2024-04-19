#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int solve(vi &a,int key){
    int n = key;
    unordered_set<int> s;
    rep(i,0,a.size()){
        if(s.find(abs(n-a[i]))!=s.end() || s.find(n+a[i])!=s.end()){
            return 1;
        }
        s.insert(a[i]);
    }
    return -1;
}
int main(){
    int  n = 6; int target = 78;
    vi a  = {5, 20, 3 ,2 ,5 ,80};
    cout<<solve(a,target);
}
// output: 1