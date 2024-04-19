#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
void makeNotes(int amount){
    int sum = 0;
    int arr[] = {2000,500,200,100,50,20,10,5,1};
    int i = 0;
    map<int,int> mp;
    while(sum!=amount){
        sum+=arr[i];
        if(sum<=amount){
            mp[arr[i]]++;
        }else{
            sum-=arr[i];
            i++;
        }
    }
    for(auto it:mp){
        if(it.first!=0){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
}
int main(){
    int amount = 5231;
    makeNotes(amount);
}
// output:
// 1 1
// 10 1
// 20 1
// 200 1
// 500 2
// 2000 2