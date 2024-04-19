#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
    void funcA(){
        cout<<"Func A\n";
    }
    private:
    int b;
    void funcB(){
        cout<<"Func B\n";
    }
    protected:
    int c;
    void funcC(){
        cout<<"Func C\n";
    }
};
class B : public A{ // B inherited class A
    
};
class C : public B{

};
int main(){
    B b;
    b.funcA();    
    C c;
    c.funcA();

}

// types of Inheritence

// Single
// Multi
// Hybrid
// Heirachical
// so on..