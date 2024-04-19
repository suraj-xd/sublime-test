#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string name = "suraj varsha";
    name.erase(5,7);
    cout<<name;
    name.insert(5,"shivi");
    cout<<name;
    cout<<name.find("shiv");
    cout<<name.substr(5,5);
    sort(name.begin(),name.end());
    name.clear();
    cout<<name.empty();


}