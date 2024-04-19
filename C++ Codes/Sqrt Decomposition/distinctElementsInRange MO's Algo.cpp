#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
const int N = 1e5+2, MOD = 1e9+7;
struct Q{
    int l,r,idx;
};
int rootN;
Q q[N];
bool compare(Q q1,Q q2){
    if(q1.l/rootN == q2.l/rootN){
        return q1.r > q2.r;
    }
    return q1.l < q2.l;
}
signed main(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int queries; cin>>queries;
    rep(i,0,queries){
        int l,r;
        cin>>l>>r;
        q[i].l = l;
        q[i].r = r;
        q[i].idx = i;
    }
    rootN = sqrtl(n);
    sort(q,q+queries,compare);
    vi ans(queries);
    int cur_l = 0,cur_r = -1,l,r;
    int cur_ans = 0;
    vi freq(2*N,0);
    for(int i=0;i<queries;i++){
        l = q[i].l; r = q[i].r;
        l--;r--;
        while(cur_r < r){
            cur_r++;
            freq[a[cur_r]]++;
            if(freq[a[cur_r]]==1){
                cur_ans++;
            }
        }
        while(cur_l > l){
            cur_l--;
            freq[a[cur_l]]++;
            if(freq[a[cur_l]]==1){
                cur_ans++;
            }
        }
        while(cur_r > r){
            freq[a[cur_r]]--;
            cur_r--;
            if(freq[cur_r]==0){
                cur_ans--;
            }
        }
        while(cur_l < l){
            freq[a[cur_l]]--;
            cur_l++;
            if(freq[cur_l]==0){
                cur_ans--;
            }
        }
        ans[q[i].idx] = cur_ans;
    }

    rep(i,0,queries){
        cout<<ans[i]<<endl;
    }
    
}

// input:
// 5
// 1 1 2 1 3
// 3
// 1 5
// 2 4
// 3 5

// output:
// 3
// 2
// 3