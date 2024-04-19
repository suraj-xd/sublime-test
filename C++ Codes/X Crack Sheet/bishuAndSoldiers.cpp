#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    int n; cin>>n;
    vi a(n);
    for(auto &it:a) cin>>it;
    int t ; cin>>t;
    while(t--){
        int power; cin>>power;
        int sum = 0, cnt = 0;
        rep(i,0,n){
            if(a[i]<=power){
                cnt++;
                sum+=a[i];
            }else{
                break;
            }
        }
        cout<<cnt<<" "<<sum<<endl;
    }
}
// Sample Input
// 7
// 1 2 3 4 5 6 7
// 3
// 3
// 10
// 2
// Sample Output
// 3 6
// 7 28
// 2 3