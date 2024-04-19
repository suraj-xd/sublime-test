#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
string findString(string s){
    int n = s.size();
    bool vis[256] = {false};
    int Discount = 0;
    rep(i,0,n){
        if(!vis[s[i]]){
            vis[s[i]] = true;
            Discount++;
        }
    }
    int start = 0, minStart = -1, minLen = INT_MAX;
    int count = 0;
    int curr_count[256] = {0};
    rep(i,0,n){
        curr_count[s[i]]++;
        if(curr_count[s[i]]==1){
            count++;
        }
        if(count==Discount){
            while(curr_count[s[start]]>1){
                if(curr_count[s[start]]>1){
                    curr_count[s[start]]--;
                }
                start++;
            }
            int len = i - start +1;
            if(minLen > len){
                minLen = len;
                minStart = start;
            }
        }
    }
    return s.substr(minStart,minLen);
}

int32_t main(){
    speedo
    string s = "AABBBCBBAC";
   cout<<findString(s);
}