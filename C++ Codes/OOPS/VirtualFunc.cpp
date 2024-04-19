#include <bits/stdc++.h>
using namespace std;
// virtual function
// run time
class Base{
    public:
    virtual void fun(){
        cout<<"Fun Function of base class"<<endl;
    }
    void print(){
        cout<<"Print Function of base class"<<endl;
    }
};
class derived : public Base{
    public:
    void fun(){
        cout<<"Fun Function of derived class"<<endl;
    }
    void print(){
        cout<<"Print Function of derived class"<<endl;
    }
};
int main(){
    Base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> fun();

}