#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
int fact(int n){
    if(n<=1) return n;
    string ans = "1";
    rep(i,2,n+1){
        int carry = 0;
        for(auto &ch:ans){
            int num = ch - '0';
            num = i * num;
            num+=carry;
            int digit = num % 10;
            ch = (digit+'0');
            carry = num/10;
        }
        while(carry){
            int digit = carry%10;
            carry = carry/10;
            ans+= to_string(digit);
        }
    }
    reverse(ans.begin(),ans.end());
    int num = 0;
    for(auto it:ans){
        num*=10;
        num+= it-'0';
    }
    return num;
}
int main(){
    int c; cin>>c;
    cout<<fact(c);
}

// output:
// 120
// 3628800
// 2


// #define MAXSIZE 500
// int multiply(int x,int res[],int res_size){
// 	int carry = 0;
// 	for(int i  = 0; i < res_size;i++){
// 		int prod = res[i] * x + carry;
// 		res[i] = prod % 10;
// 		carry = prod / 10;
// 	}
// 	while(carry){
// 		res[res_size] = carry%10;
// 		carry = carry / 10;
// 		res_size++;
// 	}
// 	return res_size;
// }
// void fact(int n){
// 	int res[MAXSIZE];
// 	res[0]  = 1;
// 	int res_size = 1;
// 	for(int i = 2;i<=n;i++){
// 		res_size  = multiply(i,res,res_size);
// 	}
// 	for(int i = res_size-1;i>=0;i--){
// 		cout<<res[i];
// 	}

// }