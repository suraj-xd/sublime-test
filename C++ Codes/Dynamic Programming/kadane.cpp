#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int curr=0, maxTillNow = 0;
    for(int i=0;i<n;i++){
        curr+=a[i];
        maxTillNow = max(curr,maxTillNow);
        if(curr<0){
            curr = 0;
        }
    }
    cout<<maxTillNow;
    
}
// input: -5 -3 2 4 -1
// output: 6