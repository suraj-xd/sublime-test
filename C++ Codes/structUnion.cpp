#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    //struct

    // here memory is allocated for every individual
    struct student
    {
        int age;
        string name;
    }suraj, varsha, raman;
    suraj.age = 12;
    suraj.name = "suraj";
    varsha.age = 22;
    varsha.name  = "muskan";   
    raman.age  = 14;
    raman.name = "Raghavendra";


    //union

    //memory is placed in same panel
    union office
    {
        int sn;
        
    }a,b;
    a.sn;
    b.sn = 4;
    cout<<&a.sn<<" "<<&b.sn;
    cout<<a.sn;
    
}