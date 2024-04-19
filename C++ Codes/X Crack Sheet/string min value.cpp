#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int minValue(string s,int k){
    vi freq(26,0);
    rep(i,0,s.size ()){
        freq[s[i]-'a']++;
    }
    priority_queue<int> pq;
    for(auto &i:freq){
        pq.push(i);
    }
    rep(i,0,k){
        int tp = pq.top();
        tp--;
        pq.pop();
        pq.push(tp);
    }
    int ans = 0;
    while(pq.size()){
        int tp = pq.top();
        pq.pop();
        ans+= (tp*tp);
    }
    return ans;
}
int main(){
    cout<<minValue("abccc",1);
}
// output: 6