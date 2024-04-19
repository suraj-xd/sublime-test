#include <bits/stdc++.h>
using namespace std;

// Functions overloading

class Functions{
    public:
    void fun(){
        cout<<"Function with No arguments"<<endl;
    }
    void fun(int x){
        cout<<"Function with Int arguments"<<endl;
    }
    void fun(double x){
        cout<<"Function with Double arguments"<<endl;
    }
};

int main(){
    Functions obj;
    obj.fun();
    obj.fun(4);
    obj.fun(1.2);
}