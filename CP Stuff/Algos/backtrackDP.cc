void go(int i){
  cout<<i+1<<" ";
  for(int kk = 1;kk <= k && i-kk>=0;kk++){
      dp[i] = dp[i],dp[i-kk]+ abs(a[i] - a[i-kk]);
      return;
    }
}

void trace_back(int i,int j){
  if(i==n || j==m) return;

  if(s[i]==t[j]) res+=s[i], trace_back(i+1,j+1);
  else{
    if(give_lcs(i+1,j)==give_lcs(i,j)) trace_back(i+1,j);
    else trace_back(i,j+1);
  }
}