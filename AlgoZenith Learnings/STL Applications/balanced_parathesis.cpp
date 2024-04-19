#include<bits/stdc++.h>
using namespace std;
// ()()(())
// Depth Technique : using graph 
/*
       /\  /\
      /  \/  \/\
    /           \
*/
void solve1(){
  string s; cin >> s;
  int depth = 0;
  for(auto  it:s){
    depth =  (it=='(' ? 1 : -1) + depth;
    if(depth < 0) break;
  }
  cout << (depth < 0 ? "Not Balanced" : "Balanced");
}

// ({[][]{}})
void solve2(){

    string s;
    cin>>s;
    int n = s.length();

    map<char,int> mp;
    mp['('] = 1;
    mp['['] = 2;
    mp['{'] = 3;
    mp[')'] = -1;
    mp[']'] = -2;
    mp['}'] = -3;
    mp['<'] = 4;
    mp['>'] = -4;

    stack<int> st;
    bool is_balanced = 1;
    for(auto v:s){
        // ignore other characters.
        if(mp.find(v)==mp.end())continue;

        int num = mp[v];
        if(num>0){
            // open bracket seen...
            st.push(num);
        }else{
            // closing bracket seen...
            if(st.empty()){
                is_balanced = 0;
                break;
            }
            else if(st.top()+num==0){
                st.pop();
            }else{
                is_balanced = 0;
                break;
            }
        }
    }
    if(!st.empty()){
        is_balanced = false;
    }

    if(is_balanced){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }

}
int main() { 

    solve2();

}