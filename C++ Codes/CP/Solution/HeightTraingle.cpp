#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// height of triangle
float HeightOfTriangle(float a, float b){
    float height = 2*(a/b);
    return height;
}

int main(){
    float a,b; // area, base
    cin>>a>>b;
    cout<<HeightOfTriangle(a,b)<<endl;
}