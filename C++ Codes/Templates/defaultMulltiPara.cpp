#include <bits/stdc++.h>
using namespace std;
// templates with multiple parameters;

// undefined parameters

// default parameters

template<class T1,class T2, class T3>
class myClass{
    T1 a;
    T2 b;
    T3 c;
    public:
    myClass(T1 aa, T2 bb,T3 cc){
        this->a = aa;
        this->b = bb;
        this->c = cc;
    }
    void print(){
        cout<<this->a<<endl<<this->b<<endl<<this->c<<endl;
    }
};
int main(){
    myClass <int,float,char>obj(1,2.3,'A');
    obj.print();
}