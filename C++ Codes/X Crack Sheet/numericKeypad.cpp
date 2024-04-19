#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
string codes[] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999"};
string numericKeypad(string s){
    string ans = "";
    for(auto i:s){
        if(i==' '){
            ans+='0';
        }else{
            ans+=codes[i-'A'];
        }
    }
    return ans;
}
int main(){
    string input = "A B C EJI";   
    cout<<numericKeypad(input);
}

// output:
// 202202220335444