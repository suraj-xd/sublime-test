#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// Trailing zeros- NcR version
// NcR = n!/(R!(N-R)!)
int power_p(int N, int P){
    int G = P;
    int ans = 0;
    while(G <= N){
        ans+= N/G;
        G*=P;
    }
    return ans;
}
int trailingZerosNcR(int N, int R){
    int x = power_p(N,2) - power_p(R,2) - power_p(N-R,2);
    int y = power_p(N,5) - power_p(R,5) - power_p(N-R,5);
    return min(x,y);
}
int main(){
    int n,r; cin>>n>>r;
    cout<<trailingZerosNcR(n,r);
}
// input: 100 
// output: 10
// trailing zeros problem
// n-factorial has how many zeros!
// int power_p(int N, int P){
//     int G = P;
//     int ans = 0;
//     while(G <= N){
//         ans+= N/G;
//         G*=P;
//     }
//     return ans;
// }
// int trailingZeros(int N){
//     return power_p(N,5);
// }
// int main(){
//     int n; cin>>n;
//     cout<<trailingZeros(n);
// }

// input: 125
// output: 31