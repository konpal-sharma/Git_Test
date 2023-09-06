#include<stdio.h>
int main(){
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    (a>b)? printf("a is greater than b") : (b>a)?printf("a is lesser than b"): printf("equal");
    return 0;
}