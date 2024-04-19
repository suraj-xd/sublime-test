#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int stockNsell(int arr[], int n){
    int i = 0;
    int c = 0;

    while(i<=n-1){
        if(i==n-1){
            break;
        }
        while(i<=n-1 && arr[i]<arr[i-1]){
            i++;
        }
        int minima = i;

        while(i<=n-1 && arr[i]>arr[i-1]){
            i++;
        }
        int maxima = i-1;

        cout<<minima<<" "<<maxima<<endl;
        c++;
        if(c==0){
            cout<<"No Profit"<<endl;
        }
    }  
    return c;
}

int main(){
    int n ; cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }

    cout<<stockNsell(arr,n);
}