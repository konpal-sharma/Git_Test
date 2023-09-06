#include<stdio.h>
int main(){
    int x;
    printf("enter x:");
    scanf("%d",&x);
    if(x&1){
        printf("odd");
    }
    else{
        printf("even");
    }
    return 0;
}