#include <bits/stdc++.h>
using namespace std;
// didn't got this question 

int gcd(int a, int b){
    if(a==0){
        return b; 
    }
    return gcd(b%a, a);
}
int main(){
    int l,r;
    cin>>l>>r;
    for (size_t i = l; i <= r; i++)
    {
        for (size_t j = i; j <= r; j++)
        {
            if(gcd(i,j)==1){
                cout<<gcd(i,j);
                break;
            }
        }
        
    }
          
}