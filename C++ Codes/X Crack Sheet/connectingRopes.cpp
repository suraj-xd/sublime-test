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
int32_t main(){
    speedo
    vi a = {4, 3, 2, 6};
    priority_queue<int,vi,greater<int>> pq;
    for(auto it:a) pq.push(it);
    int ans= 0 ;
    while(pq.size()>1){
        int a = pq.top(); 
        pq.pop();
        int b = pq.top(); 
        pq.pop();
        int sum = a+b;
        ans+=sum;
        pq.push(sum);
    }
    cout<<ans;
}