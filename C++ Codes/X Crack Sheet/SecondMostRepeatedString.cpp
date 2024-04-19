#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
// Second Most Repeated String
string SecondMostRepeatedString(vector<string> s){
    unordered_map<string,int> mp;
    priority_queue<pair<int,string>> pq;
    for(auto it:s){
        mp[it]++;
    }
    for(auto it:mp){
        pq.push({it.second,it.first});
    }
    pq.pop();
    return pq.top().second;
}
int32_t main(){
    speedo

}