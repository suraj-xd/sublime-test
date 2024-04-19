#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vi a(n);
        for(auto &i:a) cin>>i;
        unordered_map<int,int> m1,m2;
        int maxOccur= 0,maxOper= 0;
        rep(i,0,a.size()){
            m1[a[i]]++;
        }
        rep(i,0,n){
            m2[(a[i] xor x)]++;
        }
        for(auto it:m1){
            if(maxOccur < it.second){
                maxOccur = it.second + m2[it.first];
                maxOper = m2[it.first];
            }
        }
        cout<<maxOccur<<" "<<maxOper<<endl;
    }
}
// input:
// 3
// 3 2
// 1 2 3
// 5 100
// 1 2 3 4 5
// 4 1
// 2 2 6 6

// output:
// 2 1
// 1 0
// 2 0