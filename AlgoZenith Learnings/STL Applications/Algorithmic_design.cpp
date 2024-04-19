#include<bits/stdc++.h>
using namespace std;
bool one_case = true;
struct myBag{ // using set and multiset
  int sum = 0;
  
  multiset<int> st;
  set<int> st1;
  
  void insert(int val){
    sum += val;
    st.insert(val);
    st1.insert(val);
  }

  void remove(int val){
    sum -= val;
    st.erase(st.find(val));
    if(st.find(val) == st.end()){
      st1.erase(val);
    }
  }

  int get_distinct(){
    return st1.size();
  }

  int getmax(){
    auto it = st.end();
    if(it!= st.begin()) return *(--it);
  }

  int getsum(){
    return sum;
  }

};
struct myBag2{ // using Map

  map<int,int> mpp;
  map<int,int> mpp2;
  int sum = 0;
  int get_max = INT_MIN;
  void insert(int val){
    sum += val;
    mpp[val]++;
    mpp2[mpp[val]]++;
    get_max = max(get_max, val);
  }

  void remove(int val){
    sum -= val;
    mpp[val]--;
    if(mpp[val]==0) mpp.erase(val);
  }

  int get_max(){
    auto it = mpp.end();
    return it->first;
  }

  int get_distinct(){
      return mpp.size();
  }

  int get_sum(){
      return sum;
  }

  int first_greater_element(int k){
    return mpp.upper_bound(k)->first;
  }

}
void solve(){




    


}
signed main() {   
  fastio();
  int _ = 1;
  if(!one_case) cin>>_;   
  for(int __= 1 ; __ <= _;__++) solve();
}