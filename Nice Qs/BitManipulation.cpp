#include <bits/stdc++.h>
using namespace std;
signed main(){

    stoi -> string to integer
    auto number = 0b10101011; -> its a number in binary form.
    __builtin_clz = count leading zeros ->000 101
    __builtin_ctz = count trailing zeros 101 00<-
    
    -> get the particular i'th bit': n& (1<<i); 
    -> remove the lsb (first bit) : (a&a-1);
    -> XOR Property 1^2^3^4^5^5^..^N = repeats [1,N+1,0,N] after every four; [X-1]%4+1;
    -> Bitwise operators has less precedence : 1<<N-1 = 1<<(N-1);
    -> 2^30 > 1*1e9;

    ---
    Bitset<100> bs;
    ---
    Mask : SubMask
    
    vector<int> v = {1,2,3};
    int n = 3;
    for(int mask = 0;mask < 1<<n ; mask++){
        for(int sub = mask;sub;sub=(sub-1)&mask){
            for(int i = 0;i < n;i++){
                if(sub & (1<<i)){
                    cout << v[i]<<' ';
                }
            }cout<<endl;
        }
    }

    // Time-Complexity: O(NcI * 2^i) ~ (3^N)
    
    ---

    A+B = (A&B + A|B)
        = 2 * (A&B) + (A^B)

    ---
    MAX (A[i] ^ A[j])

    Go greedily from higher to lower bit and build the answer.

    ---

    
}

// Prefix Sum

#include <bits/stdc++.h>
using namespace std;
int prefSum[1000001][31];
int main()
{
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int testcases;
cin>>testcases;
while(testcases--)
{
    int n,q;
    int i;
    cin>>n;
    for(i=0;i<=n;i++)
        for(int j = 0;j<31;j++)
        prefSum[i][j]=0;
    for(i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        int cnt = 0;
        while(a>0)
        {
        prefSum[i][cnt]=a%2;
        a/=2;
        cnt++;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(int j=0;j<31;j++)
        prefSum[i][j]+=prefSum[i-1][j];
    }
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        double total=(r-l+1.0)/(2);
        long long x1 = 0,x2 = 0,x3 = 0;
        for(i=0;i<31;i++)
        {
        int p = prefSum[r][i]-prefSum[l-1][i];
        if(p<total)
            x1+=(1LL<<i);
        if(p!=(r-l+1))
            x2+=(1LL<<i);
        if(p)
            x3+=(1LL<<i);
        }
        long long ans = x1+x2+x3;
        cout<<ans<<"\n";
    }
}
}