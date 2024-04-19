#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		set<char> st;
		for(auto it:s) st.insert(it);
		int cnt  = 0;
		vector<int> ans(26,INT_MAX);
		for(auto &a:st){
			int low = 0;
			int high = s.size()-1;
			int c =0;
			while(low<=high){
				if(s[low]==s[high]){low++;high--;}
				else{
					if(s[low]==a) {low++;c++;}
					else if(s[high==a]){high--;c++;}
					else {c-=1; break;}
				}
			}
			if(c!=-1) ans[a-'a'] = c;
		}
		sort(ans.begin(),ans.end());
		if(ans[0]==INT_MAX) cout<<-1<<endl;
		else cout<<ans[0]<<endl;
	}
}
