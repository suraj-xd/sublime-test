#include<bits/stdc++.h>
typedef long long lli;
using namespace std;
lli mod=1e9+7;

int find_single_occurence(vector<int> &arr)
{
    int n=arr.size();
    int ans=0;
    for(int i=0;i<32;i++)   // looping through each digit
    {
        int sum=0;
        for(int j=0;j<n;j++) // looping through each element
        {
            sum+=(arr[j] & (1<<i));
        }
        if(sum%3)           
        {
            ans|=(1<<i);    // set the bit in answer
        }
    }
    return ans;   
}

void solve()
{
    vector<int> arr={23, 5, 23, 4, 23, 4, 5, 3, 5, 4};
    int ans = find_single_occurence(arr);
    cout<<ans<<endl;
}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0; 
}