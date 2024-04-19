
bool check(int mid,int n,vector<int> &a,int k){
  int count = 0;
  int sum = 0;
  for(int i =0;i < n;i++){
    if(a[i] > mid) return false;

    sum+=a[i];

    if(sum > mid){
      count++;
      sum = a[i];
    }
  }
  count++;
  if(count <= k) return true;
  else return false;
}

int helper(int n,vector<int> &a,int k){
  int mx  = maxnum(a);
  int start = mx;
  int end = 0;

  end = accumulate(all(a),0);
  int ans = 0;
  while(start <=end){
    int mid = start + (end - start) /2;
    if(check(mid,n,a,k)){
      end = mid-1;
      ans = mid;
    }else{
      start = mid+1;
    }
  }
  return ans;
}