#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std; 
void primeFacSeive(int n){
    int spf[500]={0};
    for (int i = 2; i <=n; i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    
}
int main(){
    // int n; cin>>n;
    primeFacSeive(500);
    return 0;
}