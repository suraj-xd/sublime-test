#include <bits/stdc++.h>
using namespace std;
// templates with multiple parameters;

// defined parameters

// default parameters

template<class T1=int,class T2=float, class T3=char>
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
    void print();
    
};
template<class t1,class t2,class t3>
void myClass<t1,t2,t3>:: print(){
        cout<<this->a<<endl<<this->b<<endl<<this->c<<endl;
    }
int main(){
    myClass <>obj1(1,2.3,'A');
    myClass <char,char,char>obj2('A','B','C');
    obj1.print();
    obj2.print();
}