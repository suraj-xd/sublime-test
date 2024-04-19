#include<bits/stdc++.h>
using namespace std;
#define speedo      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb               push_back 
#define pf               push_front
#define vi               vector<int>
#define vvi              vector<vi> 
#define endl             "\n" 
#define all(v)           v.begin(),v.end() 
#define ms(a,x)          memset(a,x,sizeof(a))
#define rep(i,a,b)       for(int i=a;i<b;i++)
int main(){
    int t; cin>>t;
    while(t--){
        int k; cin>>k;
        int n = ceil( sqrt(k));
        int d = pow(n,2) -k;
        if(d<n){
            cout<<n<<" "<<d+1<<endl;
        }else{
            int c = n;
            int x = d-n;
            int r = n-x-1;
            cout<<r<<" "<<c<<endl;
        }
    }
}


// Brute force

// const int N = 13200;
// unordered_map<int,pair<int,int>> mp(N*N);
// int num = 1;
// void fill(int n,int i,int j){
//     while(i!=n){
//         // a[i++][j] = num++;
//         mp[num].first = i++;
//         mp[num].second = j;
//         num++;
//     }
//     while(j!=0){
//         // a[i][j--] = num++;
//         mp[num].first = i;
//         mp[num].second = j--;
//         num++;
//     }
// }
// int32_t main(){
//     speedo
//     // vvi a(5,vi(5));
//     rep(i,0,N){
//         fill(i,0,i+1);
//     }
//     int t; cin>>t;
//     while(t--){
//         int k; cin>>k;
//         cout<<mp[k].first+1<<" "<<mp[k].second<<endl;
//     }
//     // for(auto it:a){
//     //     for(auto i:it){
//     //         cout<<i<<" ";
//     //     }cout<<endl;
//     // }
// }
//  1  2  5  10 17
//  4  3  6  11 18
//  9  8  7  12 19
// 16 15 14  13 20
// 25 24 23  22 21

// input:
// 7
// 11
// 14
// 5
// 4
// 1
// 2
// 1000

// 2 4
// 4 3
// 1 3
// 2 1
// 1 1
// 1 2
// 32 25