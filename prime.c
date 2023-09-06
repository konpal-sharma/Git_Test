#include<stdio.h>
int main(){
    int i, num;
    printf("enter a number:-");
    scanf("%d",&num);
    for(i=2;i*i<num;i++){
        if(num%i==0){
            printf("number is not prime");
        }
        else{
            printf("number is prime");
        }
        
    }

    return 0;
}