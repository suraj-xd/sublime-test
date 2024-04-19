#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
// select the activity to do be done in least time (one activity on one time)
int main(){
    int n; cin>>n;
    vector<vector<int>> a;
    for (size_t i = 0; i < n; i++)
    {
        int start,end;
        cin>>start;
        cin>>end;
        a.push_back({start,end});
    }

    sort(a.begin(),a.end(),[&](vector<int> &a,vector<int> &b){
        return a[1] < b[1];
    });
    int take = 1;
    int end = a[0][1];
    for(int i = 1;i<n;i++){
        if(a[i][0]>=end){
            take++;
            end = a[i][1];
        }
    }
    cout<<take;
}

// input- 3
// 10 20 
// 12 15
// 20 30
// output- 2