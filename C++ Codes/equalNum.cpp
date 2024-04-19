#include <bits/stdc++.h>
using namespace std;
// make equal every element of an array;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // sort(a.begin(),a.end());  // if array aint sorted
    int mid = n/2;
    int midElem = a[mid];
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        while(a[i]!=midElem){
            if(a[i]>midElem){
                a[i]--;
            }else{
                a[i]++;
            }
            count++;
        }
    }
    cout<<count;
}

// input- 5
//         1 2 5 10 20

// output- 27;