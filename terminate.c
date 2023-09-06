#include<stdio.h>
int main(){
    int N,sum=0;
    while(1){
        scanf("%d",&N);
        if(N==-1){
            break;
        }
        sum+=N;    
    }
    printf("%d",sum);    
}