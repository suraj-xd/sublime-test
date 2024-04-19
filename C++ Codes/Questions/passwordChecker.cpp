#include <bits/stdc++.h>
using namespace std;
int main(){

    int T; cin>>T;
    while(T--){
        string S;
        cin>>S;
        int a=0,b=0,c=0;
        for (size_t i = 0; i < S.length(); i++)
        {   

            if(S[i]>='a' && S[i]<='z'){
                a++;
            }else if(S[i]>='A' && S[i]<='Z'){
                b++;
            }else{
                c++;
            }

        }
        if(a && b && c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}

// // geek question: find max same divisor and quoteint                                                                                      
// int quotient(int n,int m){
//     int ans = 0;
//     for (size_t i = 1; i <= min(n,m); i++)
//     {
//         if(n%i==0 && m%i==0){
//             ans= (n/i)+(m/i);
//         }
//     }
//     return ans;
// }
// int main(){
//     cout<<quotient(5,6);
// }