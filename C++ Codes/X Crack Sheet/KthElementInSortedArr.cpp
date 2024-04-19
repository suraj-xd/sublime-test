#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int KthElementInSortedArr(int arr1[],int arr2[],int n,int m,int k){
    int i = 0, j = 0, c= 0;
    int ans = 0;
    while(i<n && j<m && c++ <k){
        if(arr1[i]<arr2[j]){ 
            ans = arr1[i++];
        }else{
            ans = arr2[j++];
        }
    }
    while(i< n && c<k){
        cout<<"while1"<<endl;
        ans= arr1[i];
        i++;c++;
    }
    while(j<n && c<k){
        cout<<"while2"<<endl;
        ans = arr2[j];
        j++; c++;
    }
    return ans;
}
int main(){
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};
    cout<<KthElementInSortedArr(arr1,arr2,5,4,5);
}