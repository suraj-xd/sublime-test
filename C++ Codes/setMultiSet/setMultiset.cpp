#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main(){

    // SET: default ordered set : time complexity- o(logn);
    cout<<"SETS"<<endl;
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(auto i : s){
        cout<<i<<" ";
    }cout<<"\n";

    cout<<s.size()<<"\n";
    s.erase(2);

    for(auto i : s){
        cout<<i<<" ";
    }cout<<"\n";

    s.erase(s.begin());
    for(auto i : s){
        cout<<i<<" ";
    }cout<<"\n";

    s.insert(1);
    s.insert(1); // neglects the same values because its holds unique values
    
    cout<<s.size()<<"\n";
    
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }cout<<"\n";

    for(auto i=s.rbegin();i!=s.rend();i++){
        cout<<*i<<" ";
    }cout<<"\n";

    cout<<*s.lower_bound(2)<<" "; // 3
    cout<<*s.upper_bound(3)<< " "<<"\n"; // 2

    set<int,greater<int>> g; // prints in decreasing order
    set<int,less<int>> l;    // prints in increasing order
    g.insert(3);
    g.insert(2);
    g.insert(1);
    for(auto i=g.begin();i!=g.end();i++){
        cout<<*i<<" ";
    }cout<<"\n";

    cout<<"MULTI-SETS"<<endl;

    // MULTISET: holds duplicate values too

    multiset<int> m;

    m.insert(1);
    m.insert(3);
    m.insert(5);
    m.insert(3);
    m.insert(3);
    m.insert(3);
    m.insert(7);
    for(auto i:m){
        cout<<i<<" ";
    }cout<<"\n";

    // m.erase(3); // will erase all the instances if value(3)
    
    m.erase(m.find(3));
    for(auto i:m){
        cout<<i<<" ";
    }cout<<"\n";



    // UNORDERED SET: time complexity- O(1);

    // unordered_set
    // unordered_multiset

    cout<<"UNORDERED-SETS"<<endl;

    unordered_set<int> u;
    u.insert(1);
    u.insert(3);
    u.insert(2);
    for(auto i:u){
        cout<<i<<" ";
    }cout<<endl; // output: 2 1 3  (prints in random order)

    u.erase(u.find(3));
    for(auto i:u){
        cout<<i<<" ";
    }cout<<endl;
}