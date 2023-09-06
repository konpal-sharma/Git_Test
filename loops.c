#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int w,h,c=0;
    for(i=0;i<n;i++){
        scanf("%d %d",&w,&h);
        if(w<50&&h>170){
            c++;  
        }
    }
    printf("%d",c);
    return 0;
}