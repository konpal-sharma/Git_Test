#include<stdio.h>
int divide(int, int);
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=divide(a,b);
    printf("%d",c);
    return 0;
}
int divide(int x, int y){
    int z=x/y;
    if(x%y==0){
        printf("%d",z);
    }
    else{
        return -1;
    }
}