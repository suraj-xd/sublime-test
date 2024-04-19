#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int main(){
    vector <int> a = {2,1,3,4,5,2,1};
    int anss = 0;
    int minHeight  = a[0];
    rep(i,1,a.size()){
        int ans = 1;
        minHeight = max(minHeight,a[i]);
        if(a[i]>=minHeight){
            int j = i;
            ans = ans*minHeight;
            while(a[++j]>=minHeight){
                ans*=minHeight;
            }
        }
        anss = max(anss,ans);
    }
    cout<<anss;
}
// output: 27