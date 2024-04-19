  vector<int> a = {1,2,3,4,1,2,3,4,5,6};
  int xorr = 0;
  for(auto it:a) xorr ^= it;
  int setBit = xorr & (xorr-1);
  int a1= 0;
  int a2 = 0;
  for(int it:a){
    if(setBit&it) a1 = a1 ^it ;
    else a2 = a2 ^ it;
  }
  cout << a1 << ' ' << a2;