#include<stdio.h>
void printj();
int main(){
    int i;
    i=10;
    printf("%d\n",i);
    printj();
    printj();
    printj();

    return 0;
}
void printj(){
    static int j=30;
    printf("%d\n",j);
    j=j++;
}