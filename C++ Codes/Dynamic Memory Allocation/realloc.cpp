#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int *ptr = (int*)malloc(2*sizeof(int));
    if(ptr==NULL){
        printf("No Memory available\n");
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Enter a integer: \n");
        scanf("%d", ptr+i);
    }
    ptr = (int*)realloc(ptr,4*sizeof(int));
    if(ptr==NULL){
        printf("No Memory available\n");
    }
    for (int i = 2; i < 4; i++)
    {
        printf("Enter a integer: \n");
        scanf("%d", ptr+i);
    }
    for (size_t i = 0; i < 4; i++)
    {
        printf(" %d ", *(ptr+i));
    }
}