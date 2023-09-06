#include<stdio.h>
int main(){
    int arr[100],sum,i,n;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum=arr[0];
    for(i=0;i<n;++i){
        if(i%2==0){
            sum+=arr[i];
        }
    }
    printf("the sum of even elements of array are:%d",sum);

    return 0;
}