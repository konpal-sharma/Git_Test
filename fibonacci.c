#include<stdio.h>
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    int ft=0;
    int st=1;
    int tt=0;
    while(tt<num){
        ft=st;
        st=tt;
        tt=ft+st;
    }
    if(tt==num){
        printf("number is in fibonacci series");
    }
    else{
        printf("number is not in the series");
    }
}