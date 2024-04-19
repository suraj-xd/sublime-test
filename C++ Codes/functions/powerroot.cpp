#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
long long binpow(long long a, long long b, long long m) {
a %= m;
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a % m;
a = a * a % m;
b >>= 1;
}
return res;
}
// iterative
long long binpow(long long a, long long b) {
	long long res = 1;
	while (b > 0) {
		if (b & 1)
		res = res * a;
		a = a * a;
		b >>= 1;
	}
return res;
}
// recursive

long long binpow(long long a, long long b) {
if (b == 0)
return 1;
long long res = binpow(a, b / 2);
if (b % 2)
return res * res * a;
else
return res * res;
}
// ROOT FUNCTION
// int root(int num,int n){
//     int temp_num;
//     for(int i=2;i<=num/2;i++){
//         temp_num = 1;
//         for (int j = 1; j <=n ; j++)
//         {
//             temp_num*=i;
//             if(temp_num==num){
//                 return i;
//             }
//         }
        
//     }
//     return -1;
// }
int main(){
    //Power of N


    // long long int m,n, ans = 1; cin>>m>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     ans*=m;
    // }
    // cout<<ans;

    //Root of N

    
    // cout<<root(8,3);

}