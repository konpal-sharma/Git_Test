#include<stdio.h>
void largearray(int n,int arr[100],int large,int i,int j){
    large=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>large){
            printf("the largest number in array is:%d\n",arr[i]);
        }
    }
}
int main(){
    int n, arr[100], large, small, i, j;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter the elemnts of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largearray(arr[i]);
    return 0;
}