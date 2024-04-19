#include <iostream>
#include <stdlib.h>
using namespace std;
int *input(int  n){
    int *ptr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", ptr+i);
    }
    return ptr;
}
int main(){
    int *ptr = input(4);
    for (size_t i = 0; i < 4; i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    free(ptr);
    ptr=NULL;
}