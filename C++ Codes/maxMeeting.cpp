#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool compare(vi &a,vi &b){
    if(a[1]==b[1]){
        return a[0] < b[0];
    }
    return a[1] < b[1];
}
int maxMeeting(vi &S, vi &F, int n){
    vvi meets;
    rep(i,0,n){
        meets.push_back({S[i],F[i]});
    }
    sort(meets.begin(),meets.end(),compare);
    int ans = 1;
    int ending = meets[0][1];
    rep(i,1,n){
        if(ending < meets[i][0]){
            ending  = meets[i][1];
            ans++;
        }
    }
    return ans;
}
int main(){
    int N = 6;
    vi S = {1,3,0,5,8,5};
    vi F = {2,4,6,7,9,9};
    int ans = maxMeeting(S,F,N);
    cout<<ans;
}