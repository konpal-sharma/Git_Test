#include<stdio.h>
int main(){
    int arr[100], sum, i, n;
    float a;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum=arr[0];
    for(i=0;i<n;++i){
        sum+=arr[i];
        a=sum/n;
    }
    printf("the average of the elements of the array is:%d",a);

    return 0;
}