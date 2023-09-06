#include<stdio.h>
int main(){
    int arr[5],i;
    int *ptr=arr;
    printf("enter 5 elements:");
    for(i=0;i<5;i++,ptr++){
        scanf("%d",ptr);
    }
    for(i=0;i<5;i++,ptr++){
        printf("%d",ptr);
    }
    return 0;
}