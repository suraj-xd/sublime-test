 #include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int32_t main(){
    speedo
	int n; cin>>n;
	vvi a(n,vi(n,0));
	for(auto &it:a){
		for(auto &i:it) cin>>i;
	}
	vvi dp(n,vi(n,0));
	dp[0][0] = a[0][0];
	rep(i,1,n) dp[0][i] = dp[0][i-1] + a[0][i];
	rep(i,1,n) dp[i][0] = dp[i-1][0] + a[i][0];
	rep(i,1,n){
		rep(j,1,n){
			dp[i] [j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + a[i][j];
		}
	}
}
// vvi a = {{1,2,3},
// 			 {3,4,5},
// 			 {5,6,7}};
// 	int n =a.size();
// 	vvi arr(n,vi(n,0));
// 	arr[0][0] = a[0][0];
// 	rep(i,1,n){
// 		arr[0][i] = arr[0][i-1] + a[0][i];
// 	}
// 	rep(i,1,n){
// 		arr[i][0] = arr[i-1][0] + a[i][0];
// 	}
// 	rep(i,1,n){
// 		rep(j,1,n){
// 			arr[i][j] = arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1] + a[i][j];
// 		}
// 	}