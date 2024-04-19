#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)

// Hashing- key,value
// implemented by map,unorder_map; 
int main(){
    map<int,int> mp;
    mp[9] = 3;
    mp[9] = 4;
    mp[3] = 5;
    cout<<mp[9]<<" "<<mp[3]<<"\n";

    // unordered map

    unordered_map<int, int> ump;
    ump[4] = 4;
    ump[6] = 3;
    cout<<ump[6]<<" "<<ump[4];
}