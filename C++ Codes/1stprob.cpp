#include <iostream>
#include <string.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    while(true){
        if(n==1){
            break;
        }
        if(n%2==0){
            n = n/2;
            cout<<n<<endl;
        }
        else if(n%2!=0){
            n = n*3;
            n = n+1;
            cout<<n<<endl;
        }
    }
}