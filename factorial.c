#include<stdio.h>
int main(){
    int fact,i,n;
    printf("enter number:");
    scanf("%d",&n);
    if(n==0&&n==1)
        return 1;
    else if(n<0)
        printf("Invalid number");
    fact =1;
    for(i=n;i>=1;--i){
        fact=fact*i;
    }
    
    printf("the factorial of given number is: %d",fact);
    return fact;
}