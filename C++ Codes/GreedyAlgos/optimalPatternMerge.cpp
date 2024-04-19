#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
int main(){
    
    int n;
    cin>>n;

    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }

    priority_queue<int, vector<int> , greater<int>> minHeap;
    int ans = 0;
    rep(i,0,n){
        minHeap.push(a[i]);
    }

    while(minHeap.size()>1){
        int e1 = minHeap.top();
        minHeap.pop();
        int e2 = minHeap.top();
        minHeap.pop();
        cout<<e1<<" "<<e2<<endl;
        ans+=(e1+e2);
        minHeap.push(e1+e2);
    }

    cout<<ans<<endl;
}

// input- 4
// 5 2 4 7
// working- 2 4
//          5 6
//          7 11
// output- 35