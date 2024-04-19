#include <bits/stdc++.h>
using namespace std;
// example graph:
/*
                 1
               /   \
              2     3
           / / \ \  /
          4  5  6  7
*/
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
const int N = 1e5+2, MOD = 1e9+7;
vi adj[N];




int main(){
    
    int n,m;
    cin>>n>>m;

    vvi adjm(n+1,vi(n+1,0));

    rep(i,0,m){
        int x,y;
        cin>>x>>y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;

    }
//   input:7 7
//         1 2
//         1 3
//         2 4
//         2 5
//         2 6
//         2 7
//         7 3

    cout<<"Adjacency Matrix of above graph is given by: "<<endl;

    rep(i,1,n+1){
        rep(j,1,n+1){
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }

    //  output:Adjacency Matrix of above graph is given by: 
    //         0 1 1 0 0 0 0 
    //         1 0 0 1 1 1 1 
    //         1 0 0 0 0 0 1 
    //         0 1 0 0 0 0 0 
    //         0 1 0 0 0 0 0 
    //         0 1 0 0 0 0 0 
    //         0 1 1 0 0 0 0

    cin>>n>>m;

    rep(i,0,m){
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
//   input:7 7
//         1 2
//         1 3
//         2 4
//         2 5
//         2 6
//         2 7
//         7 3


    cout<<"Adjacency List of Above graph is: "<<endl;

    rep(i,1,n+1){
        cout<<i<<"->";
        for(auto it: adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }


// Adjacency List of Above graph is: 
// 0->
// 1->2 3 
// 2->1 4 5 6 7 
// 3->1 7 
// 4->2 
// 5->2 
// 6->2 
// 7->2 3
}