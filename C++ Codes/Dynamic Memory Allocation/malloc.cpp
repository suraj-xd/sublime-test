#include "bits/stdc++.h"
using namespace std;
// Dynamic Memory allocation using malloc
int main(){
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("\n Memory Not Available\n");
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("Enter a integer: ");
        scanf("%d", ptr+i);
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        printf("%d",*(ptr+i));
    }
    return 0;
    
}