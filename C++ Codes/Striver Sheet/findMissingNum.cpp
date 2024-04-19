#include <bits/stdc++.h>
using namespace std;
int *findMissingNum(vector<int> &a, int n){
    int XOR = 0;
    for(int i=0;i<n;i++) XOR ^= ((i+1)^a[i]);
    int setbit_no = XOR & ~(XOR-1);

    int bucket1= 0,bucket2 = 0;
    for(int i=0;i<n;++i) {
        if((a[i]&setbit_no)){
            bucket1^=(a[i]);
        }else{
            bucket2^=(a[i]);
        }
        if(((i+1)&setbit_no)){
            bucket1^=(i+1);
        }else{
            bucket2^=(i+1);
        }
    }
    int *ans = new int[2];
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==bucket1){
            flag=1;
            break;
        }
    }
    if(flag){
        ans[0] =  bucket1;
        ans[1] = bucket2;
    }else{
        ans[1] = bucket1;
        ans[0] = bucket2;
    }
    return ans;
}
int main(){
    vector<int> a = {1,3,3};
    int n = a.size();
    int *ans = new int[2];
    ans = findMissingNum(a,n);
    cout<<ans[0]<<" "<<ans[1];
}