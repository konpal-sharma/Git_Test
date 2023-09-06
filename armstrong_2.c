#include<stdio.h>
int main(){
    int n,temp,sum,rex,r;
    printf("enter a three digit number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
    r=n%10;
    rex+=r*r*r;
    n=n/10;
}
    if(temp==rex){
        printf("number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }
    
    return 0;
}