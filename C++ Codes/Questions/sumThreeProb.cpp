#include <bits/stdc++.h>
using namespace std;
    // three sum problem
int main(){
    int n; cin>>n;
    int target; cin>>target;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    } //{12,3,7,1,6,9}
    // sort(a.begin(),a.end());
    // {1,3,6,7,9,12}
    vector<int> ans;
    bool found = false;
    for (size_t i = 0; i < n; i++)
    {   
        int lo = i+1,hi = n-1;
        while(lo<hi){
            int current = a[i] + a[lo] + a[hi];
            if(current==target){
                    ans.push_back(a[i]);
                    ans.push_back(a[lo]);
                    ans.push_back(a[hi]);
                    found = true;
            }
            if(current<target){
                lo++;
            }else{
                hi--; 
            }
        }
    }
    if(found){
        for(auto i : ans){
            cout<<i<<" ";
        }cout<<endl;
    }else{
        cout<<"Not found";
    }
    



    // vector<int> ans;
    // int n=5,target=24;
    // int arr[n] = {12,3,7,1,6,9};
    // bool found=false;
    // for (size_t i = 0; i < n; i++)
    // {
    //     for (size_t j = i+1; j < n; j++)
    //     {
    //         for (size_t k = j+1; k < n; k++)
    //         {
    //             if(arr[i]+arr[j]+arr[k]==target){
    //                 ans.push_back(arr[i]);
    //                 ans.push_back(arr[j]);
    //                 ans.push_back(arr[k]);
    //                 found= true;
    //             }
    //         }
            
    //     }
        
    // }
    // if(found==true){
    //     for(auto i : ans){
    //         cout<<i<<" ";
    //     }cout<<endl;
    // }else{
    //     cout<<"Not found";
    // }
    
}