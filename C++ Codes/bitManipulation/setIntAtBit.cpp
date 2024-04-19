#include <iostream>
using namespace std;
int setIntAtBit(int a, int b, int pos){
    typedef unsigned int ui;
    ui t = ~0;
    t = (t<<pos);
    ui left = (t&b);
    left = (left<<pos);

    ui temp = ~t;
    ui right = (temp&t);
    ui mid = (a<<pos);

    ui ans = left|right;
    ans|=mid;
    return ans;
}
int main(){
    int a,b,pos;
    cin>>a>>b>>pos;
    cout<<setIntAtBit(a,b,pos);

}