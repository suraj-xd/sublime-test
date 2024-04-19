#define ms(a,x)          memset(a,x,sizeof(a))
void prime_sieve_and_spf(int n){
  int prime[1000];
  int spf[1000];
  ms(prime,1);
  ms(spf,0);
  for(int i = 2;i <=2;i++){
    if(prime[i]){
      for(int j = i;j <=n;j+=i){
        prime[j] = false;
        if(spf[j]==0) spf[j] = i;
        else continue;
      }
    }
  }
}