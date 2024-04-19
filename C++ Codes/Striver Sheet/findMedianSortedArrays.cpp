#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
int partition(vi a,vi b){
    if(a.size()>b.size()) return partition(b,a);

    int x = a.size();
    int y = b.size();
    int low = 0;
    int high = x;
    while(low<=high){
        int partitionX = (low+high)/2;
        int partitionY = (x+y+1)/2 - partitionX;

        int maxLeftX = (partitionX==0)? INT_MIN : a[partitionX-1];
        int minRightX = (partitionX==x)? INT_MAX : a[partitionX];
        int maxLeftY = (partitionY==0)? INT_MIN : b[partitionY-1];
        int minRightY = (partitionY==y)? INT_MAX : b[partitionY];
        if(maxLeftX <= minRightY && maxLeftY <= minRightX){
            if(x+y%2==0){
                return ((double)max(maxLeftX,maxLeftY)+min(minRightX,minRightY))/2.0;
            }else{
                return max(maxLeftX,maxLeftY);
            }
        }else if(maxLeftX > minRightY){
            high = partitionY-1;
        }else{
            low = partitionX+1;
        }
    }

    return -1;
};

int main(){
    vi a = {1,3};
    vi b  = {2};
    cout<<partition(a,b);
    
}