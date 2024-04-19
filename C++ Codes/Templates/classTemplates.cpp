#include <bits/stdc++.h>
using namespace std;

// can make programs without specifying the datatypes

template <class T>
class sum{
    public:
    T a;
    T b;
    sum(T aa, T bb){
        this->a = aa;
        this->b = bb;
    }
    T num(){
        return this->a+this->b;
    }
};
template <class T>
class rum{
    T n;
    T j;
    public:
    rum(T nn, T jj){
        this->n = nn;
        this->j = jj;
    }

    void print(){
        cout<<this->n<<" "<<this->j<<endl;
    }

};
int main(){
    sum <float> s(2.3,3.5);
    cout<<s.num();

    rum <char> p('A','B');
    p.print();

    rum <string> a("Suraj","Shiv");
    a.print();

    rum <int> integer(12,23);
    integer.print();

    rum <float> teger(1.3,2.0);
    teger.print();
}