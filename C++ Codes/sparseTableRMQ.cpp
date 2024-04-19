#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
const int MAX = 100, LOG = 17;
int m[MAX][LOG];
int a[MAX];
int bit_log[MAX];
int query(int l,int r){
	int length = r-l+1;
	int k = bit_log[length];
	return min(m[l][k],m[r-(1<<k)+1][k]);

}
int main(){
	int n; cin>>n;
	bit_log[1] = 0;
	for(int i=2;i<=n;i++){
		bit_log[i] = bit_log[i/2]+1;
	}
  for(int i=0;i<n;i++){
  	cin>>a[i];
  	m[i][0] = a[i];
  }
  
  for(int k=1;k<LOG;k++){
  	for(int j = 0;j+(1<<k)-1<n;j++){
  		m[j][k] = min(m[j][k-1],m[j+(1<<k-1)][k-1]);
  	}
  }
  int q; cin>>q;
  rep(i,0,q){
  	int L,R; cin>>L>>R;
  	cout<<query(L,R)<<"\n";
  }
 
}