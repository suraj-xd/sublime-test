#include <bits/stdc++.h>
using namespace std;
class A{
public:
    int a;
    void funcA(){
        cout<<"FuncA\n";
    }
private:
    int b;
    void funcB(){
        cout<<"FuncB\n";
    }
protected:
    int c;
    void funcC(){
        cout<<"FuncC\n";
    }
};
int main(){
    A obj;
    obj.funcA();
    // obj.funcB(); //cannot access coz it's a private class
    
}