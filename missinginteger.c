#include<stdio.h>
int main(){
    int n,i,Isum=0,Asum=0,val;
    scanf("%d",&n);
    Isum=(n*(n+1))/2;
    for(i=1;i<=(n-1);i++){
        scanf("%d",&val);
        Asum=Asum+val;
    }
    int j=Isum-Asum;
    printf("%d",j);
}