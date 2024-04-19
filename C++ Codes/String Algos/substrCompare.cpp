#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// Optimized time complexity = n(for triversal) + m(for substr) = (n+m)

int main(){
    string s = "na";
    string t = "apna collegena";
    int S = s.size(), T  = t.size();
    string sub = t.substr(0,S);
    rep(i,0,T-S+1){
        if(sub == s){
            cout<<"Found at Index: "<<i<<endl;
        }
        sub[0] = t[i+1];
        sub[S-1] = t[T-i];
    }
}


// Time complexity = n(triversal) + n(substr) == (n*m)

int main(){
    string s = "na";
    string t = "apna collegena";
    int S = s.size(), T  = t.size();

    rep(i,0,T-S+1){
        if(t.substr(i,S)== s){
            cout<<"Found at Index: "<<i<<endl;
        }
    }
}

// output:
// Found at Index: 2
// Found at Index: 12