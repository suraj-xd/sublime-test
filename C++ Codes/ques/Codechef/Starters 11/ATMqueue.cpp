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
    vi powers = {2,3,1,4,5};
    vi que = {1,2,3,4,5};
    int time = 0;
    int i = 0, n = que.size();
    vector<pair<int,int>> p;
    while(i<n){
        time++;
        int j = i;
        while(j<n-1){
            if(powers[que[j]]>powers[que[j+1]]){
                swap(que[j],que[j+1]);
            }
            j++;
        }
        i++;
        p.push_back({time,que[i]});
    }
    for(auto it:p){
        cout<<it.first<<" "<<it.second<<endl;
    }
}