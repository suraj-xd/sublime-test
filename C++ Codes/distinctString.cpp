#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)

// timecomplexity = (nmlogn) nlogn(sorting) + m(comparision)

int main(){
    vector<string> strings = {"aa","b","aa","c","ad","aa"};
    int distinct = 0;
    sort(strings.begin(),strings.end());
    rep(i,0,strings.size()){
        if(i==0 or strings[i]!= strings[i-1]){
            distinct++;
        }
    }
    cout<<distinct;
}