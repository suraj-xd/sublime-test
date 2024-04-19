#include <bits/stdc++.h>
using namespace std;
// restaurent bread
int divisor(int u, int v){
    int divisor;
    for(int i=2;i<u|v;i++){
        if(u%i==0 && v%i==0){
            divisor = i;
            break;
        }
    }
    return divisor;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int x,y;
        cin>>x>>y;
        int Divisor = divisor(x,y);
        int ans = x*y/(Divisor*Divisor);
        cout<<ans;
    }


}
// 2 
// 6 9 
// 6
// 2 2
// 1