#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int equation(){
    float m,n,a,y;
    char op,x;
    char mul1,mul2,equal;
    cin>>m;    //m
    cin>>mul1; // *
    cin>>x;    //x
    cin>>op;   // +-
    cin>>n;    // n
    cin>>mul2; // *
    cin>>y;    // y
    cin>>equal;// =
    cin>>a;    // a
    float valueofx,valueofy;

    
    if(x='x'||'X'){
        switch (op)
        {
        case '+':
            valueofx = (a-(n*y))/m;
                cout<<"x = "<<valueofx;
            break;
        case '-':
            valueofx = (a+(n*y))/m;
                cout<<"x = "<<valueofx;
            break;
        default:
            cout<<"Invalid Operand!";
            break;
        }
    }
    // else{
    //     switch (op)
    //     {
    //     case '+':
    //         valueofy = (a-(m*x))/n;
    //             cout<<"y = "<<valueofy;
    //         break;
    //     case '-':
    //         valueofy = (a+(m*x))/n;
    //             cout<<"y = "<<valueofy;
    //         break;
    //     default:
    //         cout<<"Invalid Operand!";
    //         break;
    //     }
    // }




    

    return 0;
}
int main(){
    // equation();

}