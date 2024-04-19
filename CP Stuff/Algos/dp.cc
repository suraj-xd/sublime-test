// Count number of ways in a grid path

void solve(){


  int n = 4;
  vvi grid;
  grid = {{1,1,1,1},
        {1,0,1,1},
        {1,1,1,0},
        {0,1,1,1}};
  int dp[n+1][n+1];
  for(int i = n-1;i >= 0;i--){
    for(int j = n-1;j >= 0;j--){
      if(i==n-1 && j==n-1){
        dp[i][j] = 1;
      }else{
        int k1 = (i==n-1) ? 0 : dp[i+1][j];
        int k2 = (j==n-1) ? 0 : dp[i][j+1];
        dp[i][j] = (k1 + k2);
        if(grid[i][j]==0){
          dp[i][j] = 0;
        }
      }
    }
  }
  print(dp[0][0]);
}

// get max subarray sum with product with x 
 int n = 5;
  int x = -2;
  vi a = {-3,8,-2,1,-6};
  int dp[n+1][2][2];
  memset(dp,0,sizeof dp);

  dp[0][1][0] = a[0];
  dp[0][1][1] = x*a[0];
  print(  dp[0][1][0]);
  print(  dp[0][1][1]);
  int ans = max(0,max(a[0],a[0]*x));

  print(ans);
  for(int i = 1;i < n;i++){
    dp[i][1][0] = max(a[i], a[i] + dp[i-1][1][0]);
    dp[i][1][1] = max(a[i]*x, x*a[i] + max(dp[i-1][1][1] , dp[i-1][1][0]));
    dp[i][0][0] = max(a[i],a[i] + max(dp[i][0][0],dp[i][1][1]));
    ans = max(ans,max(dp[i][1][0],max(dp[i][0][0],dp[i][1][1])));
  }
  rep(i,0,n){
    rep(j,0,2){
      rep(x,0,2){
        cout<<dp[i][j][x]<<' ';
      }cout<<endl;
    }cout<<endl;
  }
  print(ans);

// binary lifting with dp

vector<int> tree[10000];
int up[100][20];
void binaryLifting(int src,int par){
  up[src][0] = par;
  for(int i = 1;i < 20;i++){
    if(up[src][i]!=-1){
      up[src][i] = up[up[src][i-1]][i-1];
    }else{
      up[src][i] = -1;
    }
  }

  for(auto child:tree[src]){
    if(child!=par){
      binaryLifting(child,src);
    }
  }
}
int query(int node,int jumprequired){
  if(node ==-1 || jumprequired==0) return  node;

  for(int i = 19;i >=0;i--){
    if(jumprequired >= (1<<i)){
      return query(up[node][i],jumprequired-(1<<i));
    }
  }
}

// Kickstart Round C- Dogs


vector<int> dogs[1000];
int dp[1000][1000][2];
int solve(int i,int x,int lastSet){
  if(x<=0) return 0;
  if(i==1001) return 1e6;
  if(dp[i][x][lastSet]!=-1) return dp[i][x][lastSet];
  int ans = solve(i+1,x,lastSet);
  for(int j = 0;i < dogs[i].size();j++){
    if(!lastSet){
      ans = min(ans,dogs[i][j] + solve(i+1,x-(j+1),1));
    }
    ans = min(ans,(2 * dogs[i][j])+ solve(i+1,x-(j+1),lastSet));
  }
  return dp[i][x][lastSet] = ans;
}

void solve(){

  int n; cin>>n;
  int k; cin>>k;
  vector<int> distance(n);
  vector<int> colors(n);
  cin>>distance; cin>>colors;
  for(int i = 0;i < n;i++){
    dogs[colors[i]].pb(distance[i]);
  }
  int ans = solve(0,k,0);
  print(ans);

}


// Rod cutting and string groups

int bestlen[1000];
int dp[100][100][100];
int helper(vector<int> &groups,int i,int j,int extras){
  if( i > j ) return 0;
  if(dp[i][j][extras]!=-1) return dp[i][j][extras];

  int ans = bestlen[groups[i] + extras] + helper(groups,i+1,j,0);
  for(int group = i+2;group <= j;group++){
    ans = max(ans,helper(groups,i+1,group-1,0)) + helper(groups,group,j,extras + groups[i]);
  }
  return dp[i][j][extras] = ans;
}
int bestlenn(vector<int> &cost){
  memset(bestlen,0,sizeof bestlen);
  memset(dp,-1,sizeof dp);
  for(int len = 0;len < cost.size();len++){
    for(int cut = 0;cut <=len;cut++){
      bestlen[len] = max(bestlen[len], cost[cut]  + bestlen[len - cut]);  
    }
  }
}
void solve(){
  
  int n = 7;
  vi groups;
  string s = "1101001";
  vi a = {3,4,9,100,1,2,3};
  int consec = 0;
  rep(i,0,sz(s)+1){
    if(i==0){
      consec++;
    }else{
      if(s[i]==s[i-1]){
        consec++;
      }else{
        groups.pb(consec);
        consec = 1;
      }
    }
  }
  debug(groups)
  bestlenn(a);
  int ans = helper(groups,0,sz(groups)-1,0);
  print(ans);
}


// bitmask

for(int j = 0;j < m;j++) for(int i = 0;i < n;i++){
    for(int mask = 0;mask < (1<<n);mask++){
      dp[mask][1] = dp[mask^ (1<<i)][0];
      if(i && !(mask & (i << 1)) && !(mask & ( 1 << i-1))){
        dp[mask][1] += dp[mask ^ (1 << i - 1)][0];
     
      if (dp[mask][1] >= MOD) dp[mask][1] -= MOD;
      }
    }
    for(int mask = 0;mask < (1<<n);mask++) dp[mask][0] = dp[mask][1];
  }
  cout << dp[0][0];
  return;