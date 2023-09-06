#include<stdio.h>
int main(){
    int arr[]={5,3,6,5,78,78,12,45};
    printf("duplicates elemnts in array are:");
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;++j){
            if(arr[i]==arr[j]){
                printf("%d\n",arr[j]);
            }
        }
    }
    return 0;
}