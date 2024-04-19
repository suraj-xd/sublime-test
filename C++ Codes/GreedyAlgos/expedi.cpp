#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

// min pumps to reach the town
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vii a(n);
        rep(i,0,n){
            cin>>a[i].ff>>a[i].ss;
        }
        int l,p;
        cin>>l>>p;
        rep(i,0,n){
            a[i].ff = l - a[i].ff;
        }
        bool flag = 0;
        int ans = 0;
        int currFuel = p;
        sort(a.begin(),a.end());

        priority_queue<int,vi> maxHeap;
        rep(i,0,n){
            if(currFuel>=l){
                cout<<"-1";
                break;
            }

            while(currFuel<a[i].ff){
                if(maxHeap.empty()){
                    flag = 1;
                    break;
                }
                ans++;
                currFuel+=maxHeap.top();
                maxHeap.pop();
            }
            if(flag){
                break;
            }
            maxHeap.push(a[i].second);
        }

        if(flag){
            cout<<"-1"<<endl;
            continue;
        }

        while(!maxHeap.empty() and currFuel<l){
            currFuel+=maxHeap.top();
            maxHeap.pop();
            ans++;
        }
        if(currFuel<l){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<ans<<endl;
    }
}

// input: testcase- 1
// pumps-           4
                // 4 4
                // 5 2
                // 11 5
                // 15 10
                // l = 25, p = 10

// output- 2