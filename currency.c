#include<stdio.h>
int main(){
    int amount,a,b,c,d,e,f,g,h,i;
    a=b=c=d=e=f=g=h=i=0;
    printf("enter amount:");
    scanf("%d",&amount);
    if(amount>=500){ 
         a=amount/500;
        
        amount%=500;
    }
    if(amount>=200){
         b=amount/200;
        
        amount%=200;
    }
    if(amount>=100){
         c=amount/100;
        
        amount%=100;
    }
    if(amount>=50){
         d=amount/50;
        
        amount%=50;
    }
    if(amount>=20){
         e=amount/20;
        
        amount%=20;
    }
    if(amount>=10){
         f=amount/10;
        
        amount%=10;
    }
    if(amount>=5){
         g=amount/5;
        
        amount%=5;
    }
    if(amount>=2){
         h=amount/2;
        
        amount%=2;
    }
    if(amount>=1){
         i=amount;
        
    }
    printf("500 - %d\n",a);
    printf("200 - %d\n",b);
    printf("100 - %d\n",c);
    printf("50 - %d\n",d);
    printf("20 - %d\n",e);
    printf("10 - %d\n",f);
    printf("5 - %d\n",g);
    printf("2 - %d\n",h);
    printf("1 - %d\n",i);
    
    return 0;
}