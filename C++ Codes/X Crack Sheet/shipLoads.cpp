#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool canShip(vi &a,int d,int max){
    int ships = 1, currLoad = 0;
    rep(i,0,a.size()){
        if(a[i]>max){
            return false;
        }
        if(currLoad+a[i]>max){
            currLoad = a[i];
            ships++;
            if(ships>d){
                return false;
            }
        }else currLoad+=a[i];
    }
    return true;
}
int shipLoads(vi &a,int d){
    int s = 0, e = 0;
    for(auto it:a) e+=it;
    int ans = 0;
    while(s<=e){
        int mid = (s+e)>>1;
        if(canShip(a,d,mid)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    vi a = {1,2,3,4,5,6,7,8,9,10}; int d = 5;
    vi b = {3,2,2,4,1,4}; int d2 = 3;
    
    int ans = shipLoads(a,d);
    int ans2 = shipLoads(b,d2);

    cout<<ans<<endl;
    cout<<ans2;
}
// output:
// 15
// 6