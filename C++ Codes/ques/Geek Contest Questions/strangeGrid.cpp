#include <bits/stdc++.h>
using namespace std;
// hackerrank
int main(){
    long long r,c,ans;
    cin>>r>>c;
    
    if(r%2==1){
        ans = ((r-1)/2)*10;
    }else{
        ans = ((r-1)/2)*10+1;
    }
    ans = ans + 2 * (c-1);
    cout<<ans;
}