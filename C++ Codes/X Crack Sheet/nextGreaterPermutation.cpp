#include<bits/stdc++.h>
using namespace std;
#define speedo           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
void nextGreaterPermutation(vi a){
    int n = a.size();
    int i = n-2;
    while(i>=0 && a[i+1]<=a[i]) i--;
    if(i>=0){
        int j = n-1;
        while(j>=0 && a[j]<=a[i]) j--;
        swap(a[i],a[j]);
    }
    reverse(a.begin()+i+1,a.end());
}
int32_t main(){
    speedo

}