// set the given bit of given number to 1... 
#include<stdio.h>
int main(){
    int x=9;
    int n;
    printf("enter bit:");
    scanf("%d",&n);
    int y;
    y=1<<(n-1);
    int m;
    m=y|x;
    printf("%d",m);
    
    return 0;
}