const int N = 1e5 + 1;
vector<int> adj[N];
int vis[N];
int DP[N];
int dp(int curr){
  int &ans = DP[curr];
  if(ans!=-1) return ans;
  ans = 0;
  for(auto x : adj[curr]){
    ans = max(ans,dp(x) + 1);
  }
  return ans;
}

void solve(){
  int n,m; cin >> n >> m;
  memset(DP,-1,sizeof DP);
  for(int i = 0;i < m;i++){
    int x,y; cin >> x >> y;
    adj[x].pb(y);
  }
  
  int ans = 0;
  for(int i = 1; i <=n;i++){
    ans = max(ans,dp(i));
  }  

  cout<<ans;


}
