#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// sorting the queries
// using pointers
const int N = 1e5+2;
int rootN;
struct Q{
    int idx,l,r;
};
Q q[N];
bool compare(Q q1,Q q2){
    if(q1.l/rootN == q2.l/rootN){
        return q1.r > q2.r;
    }
    return q1.l/rootN < q2.l/rootN;
}
int main(){
    int n; cin>>n;
    vi a(n);
    for(auto &it: a) cin>>it;

    rootN = sqrtl(n)+1;
    int queries; cin>>queries;

    rep(i,0,queries){
        int l,r;
        cin>>l>>r;
        q[i].l = l;
        q[i].r = r;
        q[i].idx = i;
    }

    sort(q,q+queries,compare);
    vi ans(queries);
    int curr_l = 0,curr_r = -1,l,r;
    int curr_ans = 0;
    for(int i=0;i<queries;i++){
        l = q[i].l; r = q[i].r;
        l--;r--;
        while(curr_r < r){
            curr_r++;
            curr_ans+= a[curr_r];
        }
        while (curr_l > l)
        {
            curr_l--;
            curr_ans+=a[curr_l];
        }
        while(curr_l < l){
            curr_ans-= a[curr_l];
            curr_l++;
        }
        while(curr_r > r){
            curr_ans-= a[curr_r];
            curr_r--;
        }
        ans[q[i].idx] = curr_ans;    
    }

    rep(i,0,queries){
        cout<<ans[i]<<endl;
    }
}

// input:
// 9
// 1 5 -2 6 8 -7 2 1 11
// 3
// 7 8
// 1 6
// 2 7

// output:
// 3
// 11
// 12