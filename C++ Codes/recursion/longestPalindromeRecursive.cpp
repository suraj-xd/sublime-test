#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int palindrome(string s,int count,int i,int j){
    if(i>j) return count;
    if(i==j) return (count + 1);

    if(s[i]==s[j]){
        count  = palindrome(s,count+2,i+1,j-1);

        return max(count,max(palindrome(s,0,i+1,j),palindrome(s,0,i,j-1)));
    }

    return max(palindrome(s,0,i+1,j),palindrome(s,0,i,j-1));
}
int main(){
    string s = "xdaabbaag";
    int ans = palindrome(s,0,0,s.size()-1);
    cout<<ans;
}