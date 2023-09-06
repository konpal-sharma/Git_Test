#include<stdio.h>
int main(){
    int arr[5],i;
   // int *ptr;
    printf("enter 5 elements:");
    for(i=0;i<5;i++){
        scanf("%d",arr+i);
    }
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}