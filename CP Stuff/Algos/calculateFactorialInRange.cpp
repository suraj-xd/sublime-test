void calculateFact(){
	const long long MAXAI = 1000000000000ll;
	vector<long long> fact;
    long long factorial = 6, number = 4;
    while(factorial <= MAXAI){
      fact.push_back(factorial);
      factorial *= number;
      number++;
    }

	// computing masks of factorials
	vector<pair<long long, long long>> fact_sum(1 << fact.size());
	fact_sum[0] = {0, 0};
	for(int mask = 1; mask < (1 << fact.size()); mask++){
		auto first_bit = get_first_bit(mask);
		fact_sum[mask].first = fact_sum[mask ^ (1 << first_bit)].first + fact[first_bit];
		fact_sum[mask].second = get_bit_count(mask);
	}
	long long res = get_bit_count(n);
	for(auto i : fact_sum){
		if(i.first <= n){
			res = min(res, i.second + get_bit_count(n - i.first));
		}
	}
	cout << res << "\n";

}



// iterating on the set bits


vector<ll> number(sz(v));
  for(int i = 0;i < (1<<sz(v));i++){
    ll sum = 0;
    for(int j = 0;j < n;j++){
      if(i&(1<<j)){
        sum+=v[j];
      }
    }
    number[i] = sum;
  }
  ll ans = INF;
  for(int i = 0; i < sz(number); i++){
      if(number[i] <= n){
          ans = min(ll(set_bits(i)) + set_bits(n - number[i]), ans);
      }
  }