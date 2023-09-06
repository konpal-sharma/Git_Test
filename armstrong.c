#include<stdio.h>
int main(){
    int arr[3],i;
    printf("enter elements:");
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
     int a,b,c,sum;
     a=arr[0]*arr[0]*arr[0];
     b=arr[1]*arr[1]*arr[1];
     c=arr[2]*arr[2]*arr[2];

    sum=a+b+c;
    if(sum==arr[i]){
        printf("number is armstrong");
    }
    printf("number is not armstrong");

    return 0;
}