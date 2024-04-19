#include <bits/stdc++.h>
using namespace std;
void printSubstr(string s, int low, int high){
    for (size_t i = low; i <= high; ++i)
    {
        cout<<s[i];
    }
}
int longestPalindromicSubstring(string s){
    int n = s.size();
    int MaxLength= 1, start = 0;

    for (size_t i = 0; i < s.length(); i++)
    {
        for(int j=i;j<s.length();j++){
            int flag = 1;
            for (size_t k = 0; k < (j-i+1)/2; k++)
            {
                if(s[i+k]!=s[j-k]){
                    flag = 0;
                }
            }

            if(flag && (j-i+1)>MaxLength){
                start = i;
                MaxLength = j-i+1;
            }
        }
    }

    cout<<"Longest Substring is: ";
    printSubstr(s,start,start+MaxLength-1);
    return MaxLength;
}
int main(){
    string s1 = "helloJijajihey";
    string s2 = "hmnitinji";
    longestPalindromicSubstring(s2);
}