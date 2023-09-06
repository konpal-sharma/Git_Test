#include<stdio.h>
int main(){
    int i,j,sum=0,p=0;
    for(i=100;i<=200;i++){
        int f=0;
        for(j=2;j*j<i;j++){
            if(i%j==0){
                f=1;
                break;
            }
        }
        if(f==0){
            sum+=j;
            p++;
        }  
    }
    printf("count - %d\n",p);
    printf("sum - %d\n",sum);


    return 0;
}