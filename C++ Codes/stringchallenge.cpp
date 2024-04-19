#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // string str1 = "abcdef";

    // //for uppercase

    // //1
    // for(int i=0; i<str1.size();i++){
    //     cout<<char(str1[i]-32);
    // }
    // cout<<endl;
    // //2
    // for(int i=0; i<str1.size();i++){
    //     if(str1[i]>='a' && str1[i]<='z'){
    //         str1[i]-=32;
    //     }
    // }
    // cout<<str1<<endl;

    // //for lowercase

    // //1
    // string str2 = "ABCDEF";
    // for(int i=0; i<str2.size();i++){
    //     cout<<char(str2[i]+32);
    // }
    // cout<<endl;
    // //2
    // for(int i=0; i<str2.size();i++){
    //     if(str2[i]>='A' && str2[i]<='Z'){
    //         str2[i]+=32;
    //     }
    // }
    // cout<<str2<<endl;


    // inbuilt function

    // string s = "absdsbdsjd";
    // transform(s.begin(),s.end(), s.begin(), ::toupper);
    // cout<<s<<endl;
    // transform(s.begin(),s.end(), s.begin(), ::tolower);
    // cout<<s<<endl;

    //Q1

    // string s = "243859439432";
    // sort(s.begin(),s.end(), greater<int>());
    // cout<<s<<endl;

    // sort(s.begin(),s.end(), less<int>());
    // cout<<s<<endl;

    // string s = "23235657654";
    // for(int i=0;i<s.size();i++){
    //     if(s[i]>s[i+1]){
    //         int temp = s[i];
    //         s[i] = s[i+1];
    //         s[i+1] = temp;
    //     }
    // }
    // cout<<s;
    //Q2

    // string s= "aabcsdhssseeff";
    // stack<int> ans;
    // int ans1 = 0;
    // for (size_t i = 0; i < s.size(); i++)
    // {
    //     for(int j = 0; j<s.size(); j++){
    //         if(s[i]=s[i+j]){
    //             ans1++;
    //         }
    //     }
    //     ans.push(ans1);
    //     ans1=0;
    // }
    // cout<<ans.top();

    string s= "aabcsdhssseeff";
    int freq[26];
    for (size_t i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (size_t i = 0; i < 26; i++)
    {
        if(freq[i]>maxF){
            maxF = freq[i];
            ans = i+'a';
        }
    }
    
    cout<<maxF << " "<< ans << endl;
}