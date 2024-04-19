#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
bool checkMirrorTree(int n,int e, int a[],int b[]){
    unordered_map<int,stack<int>> mp;
    for(int i=0;i<2*e;i+=2){
        int u = a[i], v = a[i+1];
        mp[u].push(v);
    }

    for(int i=0;i<2*e;i+=2){
        int u = b[i], v = b[i+1];
        if(mp[u].top()!=v){
            return false;
        }
        mp[u].pop();
    }
    return true;
}
int main(){
    int n = 3, e = 2;
    int A[] = {1, 2, 1, 3};
    int B[] = {1, 3, 1, 2};
    cout<<checkMirrorTree(n,e,A,B);
}
// true

// n = 3, e = 2
// A[] = {1, 2, 1, 3}
// B[] = {1, 2, 1, 3}

// false