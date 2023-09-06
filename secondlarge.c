#include<stdio.h>
int main(){
    int arr[10]={19,100,45,34,78,89,67,90,12,5};
    int i,largest,second;
    if(arr[0]>arr[1]){
        largest=arr[0];
        second=arr[1];
    }
    else{
        largest=arr[1];
        second=arr[0];    
    }
    for(i=2;i<10;++i){
        if(largest<arr[i]){
            second=largest;
            largest=arr[i];
        }
        else if(second<arr[i]){
            second=arr[i];
        }    
    }
    printf("largest number:%d\n second largest number:%d\n",largest,second);

    return 0;
}