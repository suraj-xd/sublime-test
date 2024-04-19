#include<bits/stdc++.h>
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());



void solve(){
  // clock part to break at a certain point
  clock_t tt = clock();
  while(1){
    clock_t z = clock() - tt;

    if((double)z / CLOCKS_PER_SEC > 0.97) break;
  }
  print("1 sec passed");
  
  
  // rng for getting random values in a range
  cout<<rng() % 100;

}
