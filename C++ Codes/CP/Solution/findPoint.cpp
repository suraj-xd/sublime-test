#include<bits/stdc++.h>
using namespace std;
// find symetrical point in graph
float findPoint(float Px, float Py, float Qx, float Qy){
    float R,Rx,Ry;
    Rx = (Qx-Px)+Qx;
    Ry = (Qy-Py)+Qy;
    return Rx,Ry;
}
int main(){
    float Px,Py,Qx,Qy;
    cin>>Px>>Py>>Qx>>Qy;
    cout<<findPoint(Px,Py,Qx,Qy);
}