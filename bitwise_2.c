
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int x=512;
    while(x){
        if(num&x){
            printf("1");
        }
        else{
            printf("0");
        }
        x=x>>1;
    }
    return 0;
}