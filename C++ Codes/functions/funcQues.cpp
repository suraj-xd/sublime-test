#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// sum of first natural numbers

// int sum(int n){
//     int ans = 0;
//     for(int i=0;i<=n;i++){
//         ans+=(n-i);
//     }
//     return ans;
// }
// int main(void){
//     // int n;
//     // cin>>n;
//     cout<<sum(5);
//     return 0;
// }

//pythagorian triplet

// bool check(int x,int y,int z){
//     int a = max(x,max(y,z));
//     int b,c;
//     if(a==x){
//         b = y;
//         c = z;
//     }else if(a==y){
//         b = x;
//         c = z;
//     }else{
//         b = x;
//         c = y;
//     }
//     if(a*a == (b*b+c*c)){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(check(x,y,z)){
//         cout<<"Pythagorian triplet"<<endl;
//     }else{
//         cout<<"Not a pythagorian triplet"<<endl;
//     }
// }


// Binary to decimal

// int BinaryToDecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y = n%10;
//         ans+=x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }
// int main(){
//     int n; cin>>n;
//     cout<<BinaryToDecimal(n)<<endl;
// }

//  octal to decimal

// int octalToDecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y = n%10;
//         ans+=x*y;
//         x*=8;
//         n/=10;
//     }
//     return ans;
// }
// int main(){
//     int n; cin>>n;
//     cout<<octalToDecimal(n)<<endl;
// }

// hexadecimal to decimal

// int hexadecimalToDecimal(string n){
//     int ans = 0;
//     int x = 1;

//     int s = n.size();
//     for(int i=s-1;i>=0;i--){
//         if(n[i]>='0' && n[i]<='9'){
//             ans+= x*(n[i]-'0');
//         }else if(n[i]>='A' && n[i]<='F'){
//             ans+= x*(n[i]-'A'+10);
//         }
//         x*=16;
//     }
//     return ans;
// }
// int main(){
//     string n;
//     cin>>n;
//     cout<<hexadecimalToDecimal(n)<<endl;
// }

//decimal to binary

// int decimalToBinary(int n){
//     int x = 1;
//     int ans = 0;
//     while(x<=n){
//         x*=2;
//     }
//     x/=2;
//     while(x>0){
//         int lastdig = n/x;
//         n-=lastdig*x;
//         x/=2;
//         ans = ans*10 + lastdig;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<decimalToBinary(n)<<endl;
// }

// decimal to octal

// int decimalToOctal(int n){
//      int x = 1;
//     int ans = 0;
//     while(x<=n){
//         x*=8;
//     }
//     x/=8;
//     while(x>0){
//         int lastdig = n/x;
//         n-=lastdig*x;
//         x/=8;
//         ans = ans*10 + lastdig;
//     }
//     return ans;
// }
// int main(){
//     int n; cin>>n;
//     cout<<decimalToOctal(n)<<endl;
// }

// decimal To hexadecimal

// string decimalTohexadecimal(int n){
//     int x = 1;
//     string ans = "";
//     while(x<=n){
//         x*=16;
//     }
//     x/=16;
//     while(x>0){
//         int lastdig = n/x;
//         n-= lastdig*x;
//         x/=16;

//         if(lastdig<=9){
//             ans  = ans + to_string(lastdig);
//         }else{
//             char c = 'A' + lastdig - 10;
//             ans.push_back(c);
//         }
//     }
//     return ans;
// }
// int main(){
//     int n; cin>>n;
//     cout<<decimalTohexadecimal(n)<<endl;
// }

// add binary numbers

// int reverse(int n){
//     int ans = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         ans = ans*10 + lastdigit;
//         n/=10;
//     }
//     return ans;
// }
// int addBinary(int a,int b){
//     int ans = 0;
//     int prevcarry = 0;
//     while(a>0 && b>0){
//         if(a%2==0 && b%2==0){
//             ans = ans*10 + prevcarry;
//             prevcarry = 0;
//         }else if((a%2==0 && b%2==1) || a%2==1 && b%2==0){
//             if(prevcarry == 1){
//                 ans =  ans*10 + 0;
//                 prevcarry = 1;
//             }else{
//                 ans  =  ans*10 + 1;
//                 prevcarry = 0;
//             }
//         }else{
//             ans =  ans*10 + prevcarry;
//             prevcarry = 1;
//         }
//         a/=10;
//         b/=10;
//     }
//     while(a>0){
//         if(prevcarry==1){
//             if(a%2==1){
//                 ans = ans*10 + 0;
//                 prevcarry = 1;
//             }else{
//                 ans  =  ans*10 + 1;
//                 prevcarry = 0;
//             }
//         }else{
//             ans = ans*10 + (a%2);       
//         }
//         a/=10;
//     }
//     while(b>0){
//         if(prevcarry==1){
//             if(b%2==1){
//                 ans = ans*10 + 0;
//                 prevcarry = 1;
//             }else{
//                 ans  =  ans*10 + 1;
//                 prevcarry = 0;
//             }
//         }else{
//             ans = ans*10 + (b%2);       
//         }
//         b/=10;
//     }
//     if(prevcarry==1){
//         ans = ans*10 + 1;
//     }
//     ans = reverse(ans);
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<addBinary(a,b)<<endl;
// }