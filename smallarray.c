#include<stdio.h>
void smallarray(int arr[100]){
    int n, small, i, j;
    small=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<small){
            printf("the largest number in array is:%d\n",arr[i]);
        }
    }
}
int main(){
    int n, arr[100], small, i, j;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter the elemnts of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    smallarray(arr[i]);
    return 0;
}