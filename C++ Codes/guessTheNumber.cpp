#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// guess the number
// interactive problems
int main(){
    int lo = 1, hi = 1000000;
    int ans = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        cout<<mid<<endl;
        cout<<flush;
        string s; cin>>s;
        if(s=="<"){
            hi = mid-1;
        }else{
            ans = max(ans,mid);
            lo = mid+1;
        }
    }
    cout<<"! "<<ans<<endl;
    cout<<flush;
}