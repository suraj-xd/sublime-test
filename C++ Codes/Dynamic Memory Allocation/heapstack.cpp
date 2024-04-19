#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int a =10;
    // char *c = new char();
    // *c = 'a';
    int *p = new int();
    *p = 10;
    p = new int[3];
    for (size_t i = 0; i < 3; i++)
    {
        cin>>p[i];
    }
    for (size_t i = 0; i < 3; i++)
    {
        cout<<p[i];
    }
    delete []p;
    p = NULL;
    // delete(c);
    // c = NULL;


    int n;
    cin>>n;
    string *ptr = new string[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>ptr[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        cout<<ptr[i]<< " ";
    }

    delete []ptr;
    ptr=NULL;
}