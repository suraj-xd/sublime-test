// Description

// A bishop is a piece used in the game of chess which can only move diagonally from its current position. Two bishops attack each other if one is on the path of the other. 
// Given two numbers n and k, determine the number of ways one can put k bishops on an n × n chessboard so that no two of them are in attacking positions.



#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <cstring>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
 
#include <cstdlib>
#include <ctime>
#include <assert.h>
#include <queue>
#define REP(i,n) for(int i=0;i<n;i++)
#define TR(i,x) for(typeof(x.begin()) i=x.begin();i!=x.end();i++)
#define ALLL(x) x.begin(),x.end()
#define SORT(x) sort(ALLL(x))
#define CLEAR(x) memset(x,0,sizeof(x))
#define FILLL(x,c) memset(x,c,sizeof(x))
using namespace std;
 
const double EPS = 1e-8;

#define LL long long 
#define pb push_back
int n , k;
int c[10],c2[10];
int c_tot,c_tot2;
void init_c(){
    c_tot = c_tot2 = 0;
    for(int i=1;i<=n;i+= 2){
        if(i==n){
            c_tot ++ ;
            c[c_tot] = i;
        }else{
            c_tot++;
            c[c_tot] = i;
            c_tot++ ;
            c[c_tot] = i;
        }
    }
    for(int i=2;i<=n;i+=2){
        if(i==n){
            c_tot2 ++ ;
            c2[c_tot2] = i;
        }else{
            c_tot2++;
            c2[c_tot2] = i;
            c_tot2++ ;
            c2[c_tot2] = i;
        } 
    }
}
LL R[30][30];
LL R2[30][30];
void solve(){
    CLEAR(R);
    CLEAR(R2);
    R[0][0] =1 ;
    for(int i=1;i<=c_tot;i++){
        for(int j=0;j<=c[i];j++){
            R[i][j] = R[i-1][j] + R[i-1][j-1]*(c[i] - (j-1));
          //cout << R[i][j]<<" ";
        }
     // cout << endl;
    }
    R2[0][0] =1;
    for(int i=1;i<=c_tot2;i++){
        for(int j =0;j<=c2[i];j++){
            R2[i][j] = R2[i-1][j] + R2[i-1][j-1]*(c2[i] - (j-1));
        }
    }
    
    LL ans = 0;
    for(int i =0;i<=k;i++){
        ans += R[c_tot][i] * R2[c_tot2][k-i];
    }  
    cout << ans <<"\n";
}
int  main(){
    int t; cin >> t;
    while(t--){
        scanf("%d %d", &n, &k);
        init_c();
        solve();
    }
    return 0;
}




//

// The bishops in the white grid and the black grid cannot attack each other. You can take the two parts apart and count them separately. Bishop at white cell never able to attack the bishop on the black cell, and vice-versa.
// Since the bishop is attacking at an angle, we can rotate the board by 45 degrees and then swap the grid horizontally and vertically (without affecting the number of solutions).
// Get the white grid out

//               *

//           *  *  *

//       *  *  *  *  *

//   *  *  *  *  *   *  *

//   *  *  *  *  *   *  *

//      *  *   *  *   *

//           *  *  *

//               *

// After adjustment:

// *

// *

// * * *

// * * *

// * * * * *

// * * * * *

// * * * * * *

// * * * * * *

// This looks more elegant. 

// At max, one bishop can present in one row and one column. Let c[i] be the number of columns in row i, after rotating it 45o.

// R[i][j] represents the number of solutions for placing j pieces in the first i rows.
// R[i][j] = R[i - 1][j] + R[i - 1][j - 1] * (c[i] - (j - 1))

// Similarly, solve for black cells.

// Combine the two parts, black and white.