#include<stdio.h>
int main(){
    int t,x,y,i,j,k,fact=1,sum=0,count=0;
    scanf("%d",&t);
    for(i=0;i<=t;i++){
        scanf("%d %d",&x,&y);
        

            for(k=2;k<=y;k++){
                fact=fact*k;
                if(fact>x&&fact<y){
                    count++;
                    sum+=k;
                }
                printf("%d %d",count,sum);  
            }
    } 
    return 0;
}