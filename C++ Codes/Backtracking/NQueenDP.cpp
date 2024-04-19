#include <bits/stdc++.h>
using namespace std;
int queen[20];
int n;
bool check(int row,int col){
    for(int i = 0;i < row;i++){
        int crow = i;
        int ccol = queen[i];
        if(ccol==col or abs(col-ccol)==abs(row-crow)) return 0;
    }
    return 1;
}
int helper(int level){
    if(level==n) return 1;

    int ans = 0;
    for(int col = 0;col < n;col++){
        if(check(level,col)){
            queen[level] = col;
            ans += helper(level+1);
            queen[level] = -1;    
        }
    }
    return ans;
}
int solve(){
    cin >> n;
    memset(queen,-1,sizeof queen);
    int ans = helper(0);
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    


}