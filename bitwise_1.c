#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int i=128;
    while(i>0){
        int x;
        x=i&num;
        if(x==0){
            printf("0");
        }
        else{
            printf("1");
        }
        i=i>>1;
    }
    return 0;
}