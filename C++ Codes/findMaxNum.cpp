#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int a,b,c,max;
    max=0;
    cin>>a>>b>>c;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    cout<<max;
    system("pause");
}