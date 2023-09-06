#include<stdio.h>
int main(){
    int arr[100]={0};
    int i,x,n=10,pos;
    for(i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<n;i++){
        printf("array is:%d",arr[i]);
    }
    x=5;
    pos=4;
    n++;
    for(i=n-1;i>pos;i--)
        arr[i]=arr[i-1];
   arr[pos-1]=x;
   for(i=0;i<n;i++){
    printf("%d",arr[i]);
    printf("\n");
   } 
   return 0;
}