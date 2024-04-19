#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long
// ax + by = gcd(a,b)
// gcd(a,b) = gcd(b,a%b);
// a%b = a-(b/a)*b
// ax + 0 = a | x = 1, y = 0, gcd = 1;
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
int32_t main(){
    int a,b;
    cin>>a>>b;
    triplet ans = exdendedEuclid(a,b);
    cout<<ans.gcd<<" "<<ans.x<<" "<<ans.y<<endl;
}

    // input: 7 3
        //   6 3
    // output: 1 1 -2
        //    3 0  1