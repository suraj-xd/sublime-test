#include <bits/stdc++.h>
using namespace std;
// Max sum products
int sum(int a,int b){
    return a+b;
}
int main(){
    // int arr1[] = {2,3,2,1,3};
    // int arr2[] = {1,3,2,4,2};
    // int arr1[] = {1,8,7,6,3,6};
    // int arr2[] = {5,9,6,8,8,6};
    int arr1[] = {13,37};
    int arr2[] = {2,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    vector<int> pq;
    for(int i=0;i<n;i++){
        int sum = (arr1[i]*arr2[i])+ (arr1[i+1]*arr2[i+1]);
        int diff = (arr1[i]*arr2[i+1]) + (arr1[i+1]*arr2[i]);
        if(diff>sum){
            pq.push_back(i);
        }
    }
    for(auto i:pq)
        cout<<i+1<<" ";
    // int maxsum = 0;
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout<<arr1[i]<<" ";
    //     maxsum+=(arr1[i]*arr2[i]);
    // }
    // cout<<endl<<maxsum;

}
// for(auto i:pq)
//         swap(arr1[i],arr1[i+1]);
//     int maxsum = 0;
//     for (size_t i = 0; i < n; i++)
//     {
//         cout<<arr1[i]<<" ";
//         maxsum+=(arr1[i]*arr2[i]);
//     }
//     cout<<endl<<maxsum;