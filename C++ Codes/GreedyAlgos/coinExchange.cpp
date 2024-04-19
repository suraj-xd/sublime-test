#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int x; cin>>x;
    sort(a.begin(),a.end(),greater<int>());
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        ans+=x/a[i];
        cout<<x/a[i]<<endl;
        x -= x/a[i] * a[i];
        cout<<x/a[i] * a[i]<<endl;
    }

    cout<<ans<<endl;
    // input- 5
    //         1 2 5 10 20
    //         25
    // output- 2
}


// int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int x; cin>>x;
//     sort(a.begin(),a.end(),greater<int>());
//     int ans = 0;
//     for (size_t i = 0; i < n; i++)
//     {
//         if(x==0){
//             break;
//         }
//         while(a[i]<=x){
//             x = x-a[i];
//             cout<<a[i]<<" ";
//         }
//     }