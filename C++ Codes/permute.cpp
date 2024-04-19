#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<vector<int>> ans;

// way-1
void permute(vector<int> &a, int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = idx; i<a.size(); i++){
        swap(a[i],a[idx]);
        permute(a, idx+1);
        swap(a[i],a[idx]);

    }
    return;
}

main(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    permute(a,0);
    for(auto v : ans){
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

}

// way-2
// main(){
//     int n; cin>>n;
//     vector<int> a(n);
//     for(auto &i : a)
//         cin>>i;
//     sort(a.begin(), a.end());
//     do{
//         ans.push_back(a);
//     }while(next_permutation(a.begin(),a.end()));
    
//     for(auto v : ans){
//         for(auto i : v){
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }

// }

// way-3 for duplicates

void helper(vector<int> a, vector<vector<int>> &ans, int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = idx; i<a.size(); i++){
        if(i != idx and a[i] == a[idx]){
            continue;
        }
        swap(a[i], a[idx]);
        helper(a, ans, idx+1);
    }
}
vector<vector<int>> permute(vector<int> nums){
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    helper(nums, ans, 0);
    return ans;
}

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    vector<vector<int>> res = permute(a);
    for(auto v : res){
        for(auto i : v){
            cout<<i<<" ";
        }cout<<"\n";
    }
}



// void permute(string str, string out){
//     if(str.size()==0){
//         cout<<out<<endl;
//         return;
//     }
//     for (size_t i = 0; i < str.size(); i++)
//     {
//         permute(str.substr(1),out+str[0]);
//         rotate(str.begin(),str.begin()+1, str.end());
//     }
    
// }
// void permute(string str){
//     sort(str.begin(), str.end());
//     do
//     {
//        cout<<str<<endl;
//     } while (next_permutation(str.begin(), str.end()));
    
// }
// int main(){
//     string str = "ABC";
//     // permute(str,"");
//     permute(str);
// }