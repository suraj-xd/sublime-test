// conditions:
// range [L,R]
// Sum in range
// ranges are very big
int dp[20][2][108];
int G(int pos,int tight,int sum){
  if(pos==digit.size()) return sum;
  else if(dp[20][2][108]!= -1) return dp[20][2][108];
  else if(tight){
    for(int i = 0;i <= number[pos];i++){
      if(i==number[pos]){
        return dp[pos][tight][sum] =  G(pos+1,1,sum+i);
      }
    }
  }else{
    for(int i = 0;i  <=9;i++){
      return dp[pos][tight][sum] = G(pos+1,0,sum+i);
    }
  }
}




// Priyanshu

int dp[14][100][108][2][2];
int required = 0;
int helper3(int index,int sum,int product,int tight,int started,string num){
  if(sum > required) return 0;
  if(index==sz(num)){
    if(sum==required && product==0 && started==1) return 1;
    else return 0;
  }
  int maxAllowed = tight ? sum[index] : 9;
  int ans = 0;
  for(int i = 0;i <=maxAllowed;i++){
    int newsum = sum + i;
    int newStarted = (started || i!=0) ? 1 : 0;
    int newProduct = newStarted ? (product * i)%required : product;
    int newTight = (tight  && (i == maxAllowed)) ? 1 : 0;
    ans+= helper3(index+1,newsum,newProduct,newTight,newStarted,num);
  }
  dp[index][sum][product][tight][started] = ans;
  return ans;

}
int helper2(string num,int sum){
  required = sum;
  for(int i = 0;i <=num.length();i++){
    for(int j = 0;j <=sum;j++){
      for(int k = 0;k <=sum;k++){
        dp[i][j][k][0][0] = -1;
        dp[i][j][k][0][1] = -1;
        dp[i][j][k][1][0] = -1;
        dp[i][j][k][1][1] = -1;
      }
    }
  }
  return helper3(0,0,1,1,0,num);
} 
int helper(int n){
  string num = to_string(n);
  int ans = 0;
  for(int i = 0;i <=100;i++){
    ans+= helper2(num,i);
  }
  return ans;
}
void solve(){
   int l,r ; cin>>l>>r;
   ll ans = helper(r) - helper(l-1);
   print(ans);
}


// Karthik 

// Count number of digits whose digits sum is equal to given sum

int dp[10][100][2];
int helper(string num,int n,int sum,int tight){
  if(sum < 0) return 0;
  if(n==1){
    if(sum>=0 && sum<=9) return 1;
    else return 0;
  }
  int ans = 0;
  int maxAllowed = (tight==1) ? (num[sz(num)-n] - '0' ): 9;
  for(int i =0;i <=maxAllowed;i++){
    ans+= helper(num,n-1,sum-i,tight & (i==maxAllowed));
  }  
  dp[n][sum][tight] = ans;
  return ans;
}
void solve(){

  memset(dp,-1,sizeof dp);
  int l,r; cin>>l>>r;
  int sum = ;
  string mx = to_string(r);
  int ans = helper(mx,mx.length(),sum,1);
  print(ans);

}

// Karthik

// Count even and odd indexes with same parity

int dp[10][2][2][2];
ll helper2(string& num,int n,bool even,bool started,int tight){
  if(n==0) return 1;
  if(dp[n][even][started][tight]!=-1) return dp[n][even][started][tight];
  if(even){
    ll ans= 0 ;
    vector<int> digits = {0,2,4,6,8};
    int ub = (tight==1) ? (num[sz(num)-n] - '0') : 9;

    for(auto dig:digits){
      if(dig<=ub)ans+= helper2(num,n-1,0,0,(tight&(ub==dig)));
    } 
    dp[n][even][started][tight] = ans;
    return ans;

  }else{
    ll ans =0 ;
    vector<int> digits = {1,3,5,7,9};
    int ub = (tight==1) ? (num[sz(num)-n] - '0') : 9;
    if(started==1){
      ans+= helper2(num,n-1,0,1,0); 
    }
    for(auto dig:digits){
      if(dig<=ub)ans+= helper2(num,n-1,1,0,(tight&(ub==dig)));
    }
    dp[n][even][started][tight] = ans;
    return ans;
  }
}
ll helper(ll n){
  memset(dp,-1,sizeof dp);
  string num = to_string(n);
  ll ans =  helper2(num,sz(num),0,1,1); 
  debug(ans)
  return ans;
}
void solve(){
  // memset(dp,-1,sizeof dp);
  ll l,r; cin>>l>>r;
  ll rr = helper(r);
  ll lll =  helper(l-1);
  ll ans = rr - lll;
  print(ans);
}

// Karthik

// sum of products of digits of a number in a range [L,R]

ll cnt(string &num,int n,int tight){
  if(tight==0){
    return (pow(10,n) + 0.1);
  }
  if(n==0) return 1;

  ll ans = 0;
  ll maxAllowed = (num[sz(num)-n] - '0');
  for(ll i = 0;i <=maxAllowed;i++){         
    ans+= cnt(num,n-1,(tight & (maxAllowed==i)));
  }
  return ans;
}
ll helper(string &num,int n,int tight){
  if(n==0) return 0;
  ll maxAllowed = tight ? (num[sz(num)-n] - '0') : 9;
  ll ans = 0;
  for(ll i = 0;i <=maxAllowed;i++){
    ans += (i * cnt(num,n-1,(tight & (maxAllowed==i))));
    ans += helper(num,n-1,(tight & (maxAllowed==i)));
  }
  return ans;
}
ll helper1(ll n){
  string num = to_string(n);
  return helper(num,sz(num),1);
}
void solve(){

  ll l,r; cin>>l>>r;
  if(l!=0) l--;
  ll ans = helper1(r) - helper1(l);
  print(ans);
}


// Karthik 

// Counting numbers
int helper1(string &num,int n,int x,int leading_zeroes,int tight){
  if(n==0) return 1;

  int ub = tight ? (num[sz(num)-n] - '0') : 9;
  int ans = 0;
  for(int i = 0;i <=ub;i++){
    if(x==i && leading_zeroes==0) continue;
    ans+= helper1(num,n-1,i,(leading_zeroes & (i==0)),(tight & (ub==i)));
  }
  return ans;
}
int helper(int n){
  string num = to_string(n);
  return helper1(num,sz(num),-1,1,1);
}
void solve(){


  int l,r; cin>>l>>r;
  if(l!=0) l--;
  int ans = helper(r) - helper(l);
  print(ans);
}