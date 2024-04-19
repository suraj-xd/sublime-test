#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
vi commonElements(vi a,vi b,vi c,int n1,int n2,int n3){
    vi ans;
    int i = 0,j = 0,k = 0;
    while(i<n1 && j<n2 && k<n3){
        int ma = max(a[i],max(b[j],c[k]));

        while(i<n1 && a[i]<ma){
            i++;
        }
        while(i < n1-1 && a[i]==a[i+1]){
            i++;
        }

        while(j< n2 && b[j]<ma){
            j++;
        }
        while(j< n2-1 && b[j]==b[j+1]){
            j++;
        }

        while(k<n3 && c[k]<ma){
            k++;
        }
        while(k<n3-1 && c[k]==c[k+1]){
            k++;
        }
        if(i>=n1 || j>=n2 || k>=n3){
            break;
        }
        if(a[i]==b[j] && b[j]==c[k]){
            ans.push_back(a[i]);
            i++;
            j++;
            k++;
        }
    }
    return ans;
}
int main(){
    map<int,int> mp;
    int n1 = 6;
    vi A = {1, 5, 10, 20, 40, 80};
    int n2 = 5; 
    vi B = {6, 7, 20, 80, 100};
    int n3 = 8; 
    vi C = {3, 4, 15, 20, 30, 70, 80, 120};
    vi ans = commonElements(A,B,C,n1,n2,n3);
    for(auto it:ans) cout<<it<<" ";
    // map<int,int> mp;
    // rep(i,0,n1){
    //     mp[A[i]]++;
    // }
    // rep(i,0,n2){
    //     mp[B[i]]++;
    // }
    // rep(i,0,n3){
    //     mp[C[i]]++;
    // }

    // rep(i,0,min(n1,n2,n3)){
    //     if(mp[A[i]]==3){
    //         cout<<A[i]<<endl;
    //     }
    // }
}

// output: 20 80

// brute force

// int main(){
//     int n1 = 6;
//     vi A = {1, 5, 10, 20, 40, 80};
//     int n2 = 5; 
//     vi B = {6, 7, 20, 80, 100};
//     int n3 = 8; 
//     vi C = {3, 4, 15, 20, 30, 70, 80, 120};
//     map<int,int> mp;
//     rep(i,0,n1){
//         mp[A[i]]++;
//     }
//     rep(i,0,n2){
//         mp[B[i]]++;
//     }
//     rep(i,0,n3){
//         mp[C[i]]++;
//     }

//     rep(i,0,n1){
//         if(mp[A[i]]>=2){
//             cout<<A[i]<<endl;
//         }
//     }
// }