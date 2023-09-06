//this program finds second largest number from a series of numbers without using arrays
#include<stdio.h>
int main(){
    int large=-99999,num,slarge;
    scanf("%d",&num);
    while(num!=-1){
        if(large<num){
            slarge=large;
            large=num;
        }
        else if(slarge<num){
            slarge=num;
        }
        scanf("%d",&num);
    }
    printf("second largest : %d",slarge);
      
    return 0;
}