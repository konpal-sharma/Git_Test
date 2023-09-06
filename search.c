#include<stdio.h>
int search(int arr[],int n,int ele){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==ele){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n,i,ele;
    scanf("%d",&n);
    scanf("%d",&ele);
    int arr[n];
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    if(search(arr, n, ele)){
        printf("element found");
    }
    else{
        printf("element not found");
    }

    return 0;
}