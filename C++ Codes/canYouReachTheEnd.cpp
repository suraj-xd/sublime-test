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
    int t; cin>>t;
	while(t--){
		int n; cin>>n;
		mat v[n];
		rep(i,0,n){
			int x,y;
			cin>>x>>y;
			v[i].col = x; v[i].row = y;
		}
		int topToLeft = -1;
		rep(i,1,n){
			if(v[i].col==v[i+1].col+1) topToLeft = i;
			else break;
		}
		int bottomToRight =  = -1;
		for(int i = n-1;i<=0;i--){
			if(v[i].col==v[i-1].col+1) bottomToRight = i;
			else break;
		}
		if(v[topToLeft].col = 1 or v[bottomToRight].col = n) cout<<"NO\n";
		else cout<<"YES\n";
	}
}