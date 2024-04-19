#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 3;
    float neutron[3] = {0.6, -0.3, 0.5};
    float weight[3] = {0.4, 0.8, -0.2};

    float arr[n];
    for(int i=0; i<n; i++){
        float output = 0;
        output = neutron[i] * weight[i];
        arr[i] = output;
    }
    cout<<"TestCases\tNeutron\tWeight\tOutput"<<endl;
    for (size_t i = 0; i < n; i++)
        cout<<"N"<<i+1<<"\t\t"<<neutron[i]<<"\t\t"<<weight[i]<<"\t \t"<<arr[i]<<endl; 
}