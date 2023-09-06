// reset the given bit of given number from 0 to 1 and vice versa...
#include<stdio.h>
int main(){
    int x=10;
    int n;
    printf("enter bit:");
    scanf("%d",&n);
    int y;
    y=1<<(n-1);
    int m;
    m=y^x;
    printf("%d",m);
    
    return 0;
}