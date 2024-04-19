vector<int> subsets(vi a, int n){
    vector<int> sums;
    for(int i=0;i<(1<<n);i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                sum+=a[j];
            }
        }sums.pb(sum);
    }
    return sums;
}