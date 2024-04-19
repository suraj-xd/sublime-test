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
    vi a = {1,0,1,0,0,1};
    int k =  1;
    int n = a.size();
    while(k--){
        rep(i,0,n){
            if(a[i]>0){
                if(i==0){
                    a[i+1]++;
                    a[n-1]++;
                }else if(i==n-1){
                    a[n-2]++;
                    a[0]++;
                }else{
                    a[i-1]++;
                    a[i+1]++;
                }
            }
        }
    }
    int sum = 0;
    rep(i,0,n){
        sum+=a[i];
    }
    cout<<sum<<endl;
    for(auto it:a) cout<<it<<" ";
}

// 15