#include<stdio.h>
int main(){
    int n;
    int arr[n];
    int temp,swap;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;++i){
        temp=i;
        for(int j=i+1;j<n;j++){
            if(arr[temp]>arr[j]){
                temp=j;
            }
        }
    }
    int i,j;
    if(temp!=i){
        swap=arr[i];
        arr[i]=arr[temp];
        arr[j]=swap;
    }
    printf("the sorted array is...");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}