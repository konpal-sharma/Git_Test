#include<stdio.h>
void dupliarray(int arr[],int i,int j){
    for(int i=0;i<arr[8];i++){
        for(int j=i+1;j<arr[8];++j){
            if(arr[i]==arr[j]){
                printf("%d\n",arr[j]);
            }
        }
    }
}
int main(){
        int arr[]={5,67,2,4,67,78,23,5};
    printf("duplicates elemnts in array are:");
    dupliarray();

    return 0;
}