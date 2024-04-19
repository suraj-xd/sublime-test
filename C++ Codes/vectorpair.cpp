#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std; 

bool myCompare(pair<int,int> p1, pair<int,int> p2){
    return p1.first<p2.first;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (size_t i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    } // 1 2 3
    
    vector<int>::iterator su;
    for(su=v.begin(); su!=v.end();su++){
        cout<<*su<<endl;

    } // 1 2 3

    for(auto suraj:v){
        cout<<suraj<<endl;
    } // 1 2 3
    v.pop_back();

    for(auto suraj:v){
        cout<<suraj<<endl;
    } // 1 2

    vector<int> v2 (3,50);
    // 50 50 50

    swap(v,v2);
    for(auto suraj:v){
        cout<<suraj<<endl;
    } // 50 50 50
    for(auto suraj:v2){
        cout<<suraj<<endl;
    }// 1 2
    
    v= {3,2,1};
    sort(v.begin(),v.end());
    for(auto suraj:v){
        cout<<suraj<<endl;
    } // 1 2 3


    //Pair

    pair <char,int> alphabet;
    alphabet.first = 'A';
    alphabet.second = 65;
    
    cout<<alphabet.first<<endl;// A
    cout<<alphabet.second<<endl;// 65

    // pair challenge

    int arr[] = {10,16,7,14,5,3,12,9};
    vector<pair<int,int>> a;
    for (size_t i = 0; i < sizeof(arr)/4; i++)
    {   
        // pair<int,int> p;
        // p.first = arr[i];
        // p.second = i;
        
        a.push_back(make_pair(arr[i],i));
    }

    sort(a.begin(),a.end(), myCompare);
    
    for (size_t i = 0; i < a.size(); i++)
    {
        arr[a[i].second]=i;
    }

    for (size_t i = 0; i < a.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;

}