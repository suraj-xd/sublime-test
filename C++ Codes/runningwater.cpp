#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;  
//taprunning water





// int rain_water(vector<int> a){
//     stack<int> st;
//     int n = a.size(), ans = 0;
//     for(int i = 0; i<n;i++){
//         while(!st.empty() and a[st.top()] < a[i]){
//             int cur = st.top();
//             st.pop();
//             if(st.empty()){
//                 break;
//             }
//             int diff = i - st.top() - 1;
//             ans += (min(a[st.top()],a[i]) - a[cur]) * diff;

//         }
//         st.push(i);
//     }
//     return ans;
// }   
// int main(){
//     vector<int> a = {0,2,1,0,3,2,0,2,3,4,2,0,1,0};
//     cout<<rain_water(a);
// }




int main(){
    int arr[] = {0,2,0,2,3,0,1,0};
    int n=sizeof(arr)/4;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {    
            if((arr[i+j]>=arr[i] and arr[i+j]!=0) || (arr[i+j]==1 and arr[i+j+1]!=0) || arr[i]==arr[i+j]){
                int ans1 = arr[i]-arr[i+j];
                ans+=ans1;
                ans1=0;
                cout<<"1 ";
            }
        }
    }
    cout<<ans;
}