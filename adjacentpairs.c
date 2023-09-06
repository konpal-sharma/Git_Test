#include<stdio.h>
int main(){
    int num,first=0,second=0,third,count=0;
    while(num!=-1){
        scanf("%d",&num);
            if(num==-1){
                break;
            }
            count++;
            second=first;
            first=num;
            third=first+second;
            if(count!=1){
                printf(" %d ",third);
            } 
    }
    return 0;
}