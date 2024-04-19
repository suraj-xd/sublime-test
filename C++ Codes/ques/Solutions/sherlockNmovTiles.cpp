#include <bits/stdc++.h>
using namespace std;
// sherlock n moving tiles
// two square when will overlap
int main(){
    int l,s1,s2;
    cin>>l>>s1>>s2;

    int T;
    cin>>T;
    while(T--){
        int area;
        cin>>area;
        int ans = abs(sqrt(area*2.0)-(l*sqrt(2.0)))/abs(s1-s2);
        printf("%.4f",ans);
    }
}