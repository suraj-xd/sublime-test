// Monotone Deque
#include<bits/stdc++.h>
using namespace std;
// Find minimum of every k length subarray
// O(N + K)
int main(){



}

// O(nlogk)
// Shifting window
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // build the first window
    multiset<int> mt;
    for(int i=0;i<k;i++){
        mt.insert(arr[i]); // O(log(k))
    }
    // print answer for the first window
    cout<<(*mt.begin())<<" "; // O(1)

    for(int i=0;i<n-k;i++){
        // shift window one by one and print answer.
        mt.erase(mt.find(arr[i])); // O(log(k))
        mt.insert(arr[i+k]);  // O(log(k))
        cout<<(*mt.begin())<<" "; // O(1)
    }
    cout<<endl;
}