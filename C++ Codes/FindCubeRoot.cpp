#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=2; i<=100; i++){
        int cube = 1;
        cube = i*i*i;
        if(cube==n){
            cout<<i<<endl;
            break;
        }
    }
}