#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long
// multiplicative modulo inverse exist if a and m are co prime eg (gcd(a,m)==1)
struct triplet{
    int gcd;
    int x;
    int y;
};
triplet exdendedEuclid(int a,int b){
    if(b==0){
        triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }

    triplet smallAns = exdendedEuclid(b,a%b);
    triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a/b) * smallAns.y;
    return ans;
}
int multiplicativeModuleInverse(int a,int m){
    triplet ans = exdendedEuclid(a,m);
    return ans.x;
}
int32_t main(){
    int a,m;
    cin>>a>>m;

    cout<<multiplicativeModuleInverse(a,m);
}

// input:  17 3
        // 14 5
        // 12 7
        // 19 2


// OUTPUT: -1 -1 3 1
//  17*(-1) % 3
//  -2 % 3 = (-2+3) % 3 = 1
// a % m = (a+m) % m


// brute force approach

// find b such that (a*b)%m==1
// multiplicative modulo inverse exist if a and m are co prime eg (gcd(a,m)==1)


// bool modulo(int a,int b,int m){
//     return ((a*b)%m)==1;
// }
// int32_t main(){
//     int a,m;
//     cin>>a>>m;
//     int i = 1;
//     while(i){
//         if(modulo(a,i,m)){
//             cout<<i;
//             break;
//         }
//         i++;
//     }
// }