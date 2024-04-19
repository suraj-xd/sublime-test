#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin>>x;
    int start = 0;
    int end = x;
    int result;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(mid*mid==x){
            result = mid;
            break;
        }
        if(mid*mid<x){
            start = mid+1;
            result = mid;
        }else{
            end = mid-1;
        }  
    }
    cout<<result;
}