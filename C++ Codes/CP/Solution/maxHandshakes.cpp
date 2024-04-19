#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// handshakes problem

// recursive method
int sum(int n){
    if (n==1)
    {
        return 1;
    }else{
        return n + sum(n-1);
    }
}
// int main(){int n; cin>>n;
//     cout<<sum(n)-n;
// }

// loop method
int main(){
    int n; cin>>n;
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        ans+=((n-1)-i);
    }
    cout<<ans;
}

