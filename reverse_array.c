#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("original array:\n");
    for(int i=0;i<length;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("reversed array:\n");
    for(int i=length-1;i>0;--i){
        printf("%d",arr[i]);
    }

    return 0;
}