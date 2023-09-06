#include<stdio.h>
int main(){
    // printf("%d", sizeof(3.1f));
    // printf("%d", sizeof('A'));

    // int a;
    // a=printf("Hello World!");
    // printf("%d",a);

    // int b=5, x;
    // x=b++;
    // printf("\nX=%d \nA=%d",x,b);

    // int a=0,b=0,x;
    // x=a++ || ++b;
    // printf("A=%d and B=%d",a,b);
    // printf("\nx=%d",x);

    int a=0,b=0,x;
    x=a++ && ++b;
    printf("A=%d and B=%d",a,b);
    printf("\nx=%d",x);

    return 0;
}