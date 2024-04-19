#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// beta
int palindrome(string s1,string s2,int count,int i,int j){
    if(i>j) return count;
    if(i==j) return count+1;
    if(s1[i]==s2[j]){
        count = palindrome(s1,s2,count+2,i+1,j-1);

        return max(count,max(palindrome(s1,s2,0,i+1,j-1),palindrome(s1,s2,0,i+1,j-1)));
    }
    return max(palindrome(s1,s2,0,i+1,j-1),palindrome(s1,s2,0,i+1,j-1));
}
int main(){
    string s1 = "dfabasd";
    string s2 = "erabagf";
    int ans = palindrome(s1,s2,0,0,max(s1.length()-1,s2.length()-1));
    cout<<ans;

}