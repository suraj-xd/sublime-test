#include <bits/stdc++.h>
using namespace std;










// q.2

long long primeSeive(long long n){
    long long prime[n] = {0};
    for(long long i=2;i<n;i++){
        if(prime[i]==0){
            for (long long j = i*i; j <=n; j+=i)
            {
                prime[j]=1;
            }
            
        }
    }
    long long ans=1;
    long long count=0;
    for (long long i = 2; i < n; i++)
    {   
        if(prime[i]==0){
            if(ans<=n){
                ans*=i;
                count++;
            }
            // cout<<i<<" ";
        }
        if(ans>n){
            // cout<<count-1<<" ";
            break;
        }
    }
    return count-1;
}
int main(){
    cout<<primeSeive(10000000000);
}

///

// GFG


unordered_set<int> primeFactors(int n)
{
    // Print the number of 2s that divide n
    unordered_set<int> st;
    while (n % 2 == 0)
    {
        st.insert(2);
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            st.insert(i);
            n = n/i;    
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        st.insert(n);
    return st;
}
pair<int,int> solve(int a,int b){
    bool can  = true;
    unordered_set<int> st;
    if(__gcd(a,b)==a || __gcd(a,b)==b) {
        st = primeFactors(b);
    }else{
        can = false;
    }
    if(can){
        for(auto it:st){
            if(a%it!=0){
                can = false;
                break;
            }
        }
    }
    
    if(can) return {a,b};
    else return {-1,-1};
}
signed main(){
    
    
}