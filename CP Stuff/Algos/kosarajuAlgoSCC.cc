// for finding strongly connected components in a graph

// 1. topo sort
// 2. reverse adj
// 3. DFS in reverse adj
// 4. mark nodes with same comp

const int N = 1e5 + 1;
vector<int> gr[N],grr[N];
vector<int> order;
int vis[N],col[N];
vector<int> Components[N];
void dfs1(int cur){
  vis[cur] = 1;
  for(auto x: gr[cur]){
    if(!vis[x]) dfs1(x);
  }
  order.pb(cur);
}

void dfs2(int curr,int comp){
  vis[curr] = 1;
  col[curr] = comp;
  Components[comp].pb(curr);
  for(auto x : grr[curr]){
    if(!vis[x]) dfs2(x,comp);
  }
}

void solve(){

  int n,m; cin >> n >> m;
  for(int i = 0;i < m;i++){
    int x,y; cin >> x >> y;
    gr[x].pb(y);
    grr[y].pb(x);
  }

  for(int i = 1;i <=n;i++){
    if(!vis[i]) dfs1(i);
  }
  reverse(all(order));
  memset(vis,0,sizeof vis);

  int comp = 1;
  for(auto x:order){
    if(!vis[x]) dfs2(x,comp++);
  }

  for(int i = 1;i <=n;i++){
    cout<<i<<' '<<col[i]<<endl;
  }


  print("Total Strongly connected Components are: ");
  print(comp-1);
}
