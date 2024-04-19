#include <bits/stdc++.h>
using namespace std;
int maxSumArray(vector<int> &a, int n){
    int curr = 0;
    int currsum = 0;
    for (size_t i = 0; i < n; i++)
    {
        curr+=a[i];
        currsum = max(curr,currsum);
        if(curr<0)
            curr = 0;
            
    }
    
}
int main(){
    
}